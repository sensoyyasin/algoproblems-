#include <unistd.h>
#include <stdio.h>

void swap(char *str1, char *str2)
{
char *temp = str1;
str1 = str2;
str2 = temp;
return ;
}
 
int main()
{
char *str1 = "geeks";
char *str2 = "forgeeks";
swap(str1, str2);
printf("str1 is %s\n, str2 is %s\n", str1, str2);
getchar();
return 0;
}