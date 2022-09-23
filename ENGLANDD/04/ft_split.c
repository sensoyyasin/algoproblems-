#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

char    **ft_split(char *str)
{
    int i;
    int j;
    int k;
    char **tab;

    i = 0;
    j = 0;
    k = 0;
    tab = malloc(sizeof(char **)* 1000);
    if (!tab)
        return(0);
    while (str[i] <= 32)
        i++;
   while (str[i])
   {
       if (str[i] && str[i] > 32)
       {
           tab[j] = malloc(sizeof(char *) * 1000);
           while (str[i] && str[i] > 32)
           {
               tab[j][k] = str[i];
               i++;
               k++;
           }
           tab[j][k] = '\0';
           j++;
           k = 0;
       }
       else
        i++;
   }
   tab[j] = NULL;
   return(tab);
}

int main()
{
    char s[] = "yasin   burak berk";
    char **str;
    str = ft_split(s);
    printf("%s\n%s\n%s\n", str[0],str[1],str[2]);
}