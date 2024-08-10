#include <unistd.h>

void ft_print_comb() {
    for (char c1 = '0'; c1 <= '9'; c1++)
    {
        for (char c2 = c1+1; c2 <= '9'; c2++)
        {
            for (char c3 = c2+1; c3 <= '9'; c3++)
            {
                write(1, &c1, 1);
                write(1, &c2, 1);
                write(1, &c3, 1);
                if (c1 != '7' || c2 != '8' || c3 != '9')
                {
                    write(1, ", ", 2);
                }
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    ft_print_comb();
    return 0;
}
