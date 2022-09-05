#include <unistd.h>

int     ft_atoi(char *str)
{
    int sign,result;

    sign = 1;
    result = 0;
    while (*str == ' ' || (*str >= 0 && *str <= 9))
        str++;
    if (*str == '-')
        sign *= -1;
    if (*str == '-' || *str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return(result);
}

void    print_hex(int n)
{
    char s[] = "0123456789abcdef";

    if (n >= 16)
        print_hex(n / 16);
    write(1, &s[n % 16], 1);
}

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
}