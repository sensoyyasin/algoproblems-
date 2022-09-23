#include <unistd.h>
#include <stdio.h>
int ft_base(int sayi, int base)
{
    static int  total;
    if (sayi / base > 0)
        ft_base(sayi/base, base);
    total += sayi % base;
    return (total);
}
int atoi_base(const char *str, int base)
{
    int total;
    int n;
    int i;
    
    total = 0;
    i = 0;
    n = 1;
    while (str[i] <= 32)
        i++;
    if (str[i] == '-' || str[i] == '+')
        if (str[i++] == '-')
            n = -1;
    while (str[i])
        total = total * 10 + (str[i++] - 48);
    total *= n;
    total = ft_base(total, base);
    return (total);
}
int main()
{
    printf("%d\n", atoi_base("          \n\t   123", 16));
}