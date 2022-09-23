#ifndef SORT_LIST_H
# define SORT_LIST_H

typedef struct s_list;

typedef struct s_list
{
    int data;
    t_list  *next;
}   t_list;

#endif