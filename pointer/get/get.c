#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <stdlib.h>

int main()
{
    char c;
    int fd1 = open("a.txt", O_RDONLY, 0);
    int fd2 = open("a.txt", O_RDONLY, 0);
    read(fd1, &c, 10);
    read(fd2, &c, 10);
    printf("c = %c\n", c);
    exit(0);
}