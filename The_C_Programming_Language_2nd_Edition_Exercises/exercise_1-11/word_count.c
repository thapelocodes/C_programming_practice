#include <stdio.h>
#include <stdlib.h>

#define IN 1
#define OUT 0

/**
 * main - counts the number of nw, nc and new line characters in the
 * input.
 * Return: 0.
 */

int main(void)
{
        int c, nl = 0, nc = 0, nw = 0, state;

        state = OUT;
        while ((c = getchar()) != EOF)
        {
                ++nc;
                if (c == '\n')
                        ++nl;
                if (c == ' ' || c == '\n' || c == '\t')
                        state = OUT;
                else if (state == OUT)
                {
                        state = IN;
                        ++nw;
                }
        }
        printf("%d %d %d\n", nl, nw, nc);
        return (0);
}
