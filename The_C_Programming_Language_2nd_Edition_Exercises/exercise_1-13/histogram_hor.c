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

        printf("Histogram of Lengths of Words in Input:\n\n");

        while ((c = getchar()) != EOF)
        {
                if (c == ' ' || c == '\n' || c == '\t')
                        printf("\n\n");
                else if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
                        printf(" |");
        }
        return (0);
}
