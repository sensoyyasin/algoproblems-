#include <unistd.h>

int paramsum(int n)
{
    char x;
    if (n > 9)
        paramsum(n / 10);
    x = n % 10 + 48;
    write(1, &x, 1);
    return(x);
}

int main(int argc, char **argv)
{
    paramsum(argc-1);
    write(1, "\n", 1);
    return(0);
}