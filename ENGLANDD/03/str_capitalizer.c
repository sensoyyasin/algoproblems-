#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 0;
    j = 1;
    if (argc >= 2)
    {
        while (argv[j])
        {
        while (argv[j][i])
        {
            if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
                argv[j][i] += 32;
            if ((argv[j][i] >= 'a' && argv[j][i] <= 'z') && argv[j][i - 1] <= 32)
                argv[j][i] -= 32;
            write(1, &argv[j][i], 1);
            i++;
        }
        i = 0;
        j++;
        write(1, "\n", 1);
        }
    }
    else
        write(1, "\n", 1);
}