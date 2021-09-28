#include <stdio.h>

int main()
{
    double count, iter_count;
    int c;
    c = getchar();
    while (c != EOF)
    {
        ++count;
        putchar(c);
        c = getchar();
        if (c == '\n')
        {
            ++iter_count;
            printf("\n Character count %.0f", count);
            printf("\n Line Iteration count %.0f", iter_count);
            count = 0;
        }
    }
    // int c;
    // for (count = 0; getchar() != '\n'; ++count)
    //     ;
    // printf("\nCharacter count: %.0f\n", count);
}