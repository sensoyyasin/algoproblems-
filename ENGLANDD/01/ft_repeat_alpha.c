#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int len;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                len = argv[1][i] - 65;
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                len = argv[1][i] - 96;
            else
                write(1, &argv[1][i], 1);
            while (len > 0)
            {
                write(1, &argv[1][i], 1);
                len--;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}