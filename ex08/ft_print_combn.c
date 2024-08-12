/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehylee <jaehylee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 22:56:43 by jaehylee          #+#    #+#             */
/*   Updated: 2024/08/13 01:34:12 by jaehylee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char	g_ns[10];

int	next(int l)
{
	int	i;
	int	j;

	i = 0;
	while (i <= l)
	{
		if (g_ns[l - i] != '9' - i)
		{
			j = l - i;
			g_ns[j]++;
			j++;
			while (j <= l)
			{
				g_ns[j] = g_ns[j - 1] + 1;
				j++;
			}
			return (1);
		}
		i++;
	}
	return (0);
}

void	ft_print_combn(int n)
{
	int		i;
	char	c;

	c = '0';
	i = 0;
	while (i < n)
	{
		g_ns[i] = c;
		i++;
		c++;
	}
	write(1, g_ns, n);
	while (next(n - 1))
	{
		write(1, ", ", 2);
		write(1, g_ns, n);
	}
}
