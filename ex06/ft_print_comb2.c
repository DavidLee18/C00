/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehylee <jaehylee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 20:35:49 by jaehylee          #+#    #+#             */
/*   Updated: 2024/08/11 22:25:20 by jaehylee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_2digits(int i)
{
	int	i0;
	int	i1;

	i0 = '0' + i % 10;
	i1 = '0' + i / 10;
	write(1, &i1, 1);
	write(1, &i0, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			print_2digits(i);
			write(1, " ", 1);
			print_2digits(j);
			if (i != 98)
				write(1, ", ", 2);
			j++;
		}
		i++;
	}
}
