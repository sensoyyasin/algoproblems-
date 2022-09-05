#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>

// int main()
// {
//     int a = 20;

//     int *ptr = &a;

//     int **dptr = &ptr;
//     printf ("%d\n", **dptr);
//     printf("%d\n",*(ptr++));
//     printf("%p\n",*(ptr)++);
// }

// int main(){

// int a[] = {10,20,30};

// int *p = a;

// *(p+2) = 50;
// printf("%d\n", a[2]);
// }
//// brk.txt = "burak"
int main()
{
    int *i;
    int k;
    int j;
    int l;
    int fd = 0;
    int a = 10;
    char c = 'c';
    char *str;
    char *ptr = "yas";

    i = &a;
    *i = a;
    ptr = malloc(sizeof(char *) * 1000);
    fd = open("yasin.txt", O_RDONLY);
    l = open("yasin.txt", O_RDONLY);
    k = read(fd, ptr, 7);
    j = read(l, &c, 10);
    printf("%d\n%d\n", k, j);
    printf("%d\n", fd);
    printf("%lu\n", sizeof(i));
    printf("%lu\n", sizeof(c));
    printf("%lu\n", sizeof(str));
    printf("%lu\n", sizeof(ptr));
    printf("%p\n", &a);
    printf("%d\n", a);
    printf("%p\n", &i);
    printf("%d\n", *i);
    printf("%p\n", &*i);
    printf("%s\n", ptr);
    printf("%c\n", c);
}


/*

*/