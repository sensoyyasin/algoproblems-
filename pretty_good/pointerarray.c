#include <unistd.h>
#include <stdio.h>

int main()
{
    char *s = "Hello";
    char *a = "Hello";
    while (*s != '\0') 
    {
        printf("%s\n", s++);
    }
    // while (*s != NULL) 
    // {
    //     printf("%s\n", s++);  //*s ile '\0' kullanılır
    // }
    while (*a != '\0') 
    {
        printf("%c\n", *a++);
    }    
}