#include "ft_list_size.h"

int	ft_list_size(t_list *begin_list)
{
    int i;

    i = 0;
    if (begin_list == 0)
        return(0);
    while (begin_list)
    {
        begin_list = begin_list->next;
        i++;
    }
    return(i);
}