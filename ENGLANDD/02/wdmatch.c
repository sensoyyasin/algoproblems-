#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int x = 0;

    if (argc == 3)
    {
        while (argv[2][j])
        {
            if (argv[2][j] == argv[1][i])
            {
                k++;
                i++;
            }
            j++;
        }
        i = 0;
        while (argv[1][i])
            i++;
        if (i == k)
        {
            i = 0;
            while (argv[1][i])
            {
                write(1, &argv[1][i], 1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
}