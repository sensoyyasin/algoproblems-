
void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i;
    int temp;
    
    i = 0;
    while ((size - 1) > i)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = temp;
            i = 0;
        }
        else
            i++;
    }
    
}