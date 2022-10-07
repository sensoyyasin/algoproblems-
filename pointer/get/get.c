#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    char *c;
    int fd1 = open("a.txt", O_RDONLY);
    read(fd1, &c, 6);
    printf("%c\n", c);
    exit(0);
}