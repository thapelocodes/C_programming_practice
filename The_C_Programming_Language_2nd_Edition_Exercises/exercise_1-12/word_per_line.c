#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define IN 1
#define OUT 0

/**
 * main - prints the input one word per line.
 * Return: 0.
 */

int main(void)
{
        int c;

        while ((c = getchar()) != EOF)
        {
                if (c == ' ' || c == '\n' || c == '\t')
                        putchar('\n');
                else
                        putchar(c);
        }
        return (0);
}
