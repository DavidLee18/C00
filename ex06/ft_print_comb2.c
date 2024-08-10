#include <unistd.h>

void ft_print_comb2()
{
    for (char c11 = '0'; c11 <= '9'; c11++)
    {
        for (char c12 = '0'; c12 <= '9'; c12++)
        {
            for (char c21 = '0'; c21 <= '9'; c21++)
            {
                for (char c22 = c12 + 1; c22 <= '9'; c22++)
                {
                    if (c11 != c21 || c12 != c22)
                    {
                        write(1, &c11, 1);
                        write(1, &c12, 1);
                        write(1, " ", 1);
                        write(1, &c21, 1);
                        write(1, &c22, 1);
                    }
                    if (c11 != '9' || c12 != '8' || c21 != '9' || c22 != '9')
                    {
                        write(1, ", ", 2);
                    }
                }
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    ft_print_comb2();
    return 0;
}
