#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    int i;
    int j;
    i = 1;
    if (argc < 2)
        write(1, "\n", 1);
    else
    {
        while (argv[i])
        {
            j = 0;
            while (argv[i][j] != '\0')
            {
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
                    argv[i][j] += 32;
                if (argv[i][j - 1] <= 32 && (argv[i][j] >= 'a' && argv[i][j] <= 'z'))
                    argv[i][j] -= 32;
                write(1, &argv[i][j], 1);
                j++;
            }
            i++;
        }
        write(1, "\n", 1);
    }
}