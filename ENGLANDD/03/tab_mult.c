#include <unistd.h>
#include <stdio.h>

int     ft_atoi(char *str)
{
    int sign;
    int result;

    sign = 1;
    result = 0;
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
        sign *= -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - 48;
        str++;
    }
    return(result * sign);
}

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void     ft_putnbr(int nbr)
{
    if (nbr > 9)
        ft_putnbr(nbr / 10);
    ft_putchar(nbr % 10 + '0');
}

int main(int argc, char **argv)
{
    int i,a,x;

    i = 1;
    x = 1;
    if (argc == 2)
    {
        a = ft_atoi(argv[1]);
        while (i <= 9)
        {
            ft_putnbr(i);
            write(1, " x ", 3);
            ft_putnbr(a);
            write(1, " = ", 3);
            ft_putnbr(i * a);
            write(1, "\n" ,1);
            i++;
        }
    }
    else
        write(1, "\n", 1);
}