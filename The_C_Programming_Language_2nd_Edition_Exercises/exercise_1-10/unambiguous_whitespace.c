#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * main - copies its input to its output, replacing each tab by \t, each
 * backspace by \b and each backslash by \\.
 * Return: 0.
 */

int main(void)
{
        int i = 0;
        char str[];

        while (scanf("%[^\0]", str))
        {
                if (str[i] == '\t')
                        printf("\\t");
                else if (str[i] == '\b')
                        printf("\\b");
                else if (str[i] == '\\')
                        printf("\\\\");
                else
                        putchar(str[i]);
        }

        return (0);
}
