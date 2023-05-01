#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints a histogram of the frequencies different characters
 * in its input.
 * Return: 0.
 */

int main(void)
{
        int c, i, c1;
        char str[8182];

        scanf("%[^\n]", str);

        for (i = 0; str[i]!= '\0'; i++)
                if (isupper(str[i]))
                        str[i] = tolower(str[i]);

        for (c = 1; c < 128; c++)
        {
                if (isspace(c))
                        continue;
                else if (isupper(c))
                        c1 = tolower(c);
                else
                        c1 = c;

                if (!strchr(str, c1))
                        continue;

                printf("%c:\n\t\t", c1);

                for (i = 0; str[i] != '\0'; i++)
                        if (str[i] == c1)
                                printf(" |");

                putchar('\n');
        }
        return (0);
}
