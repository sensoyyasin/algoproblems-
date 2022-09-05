#ifndef FT_LIST_REMOVE_IF.H
# define FT_LIST_REMOVE_IF.H

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

#endif