#include <stdio.h>
#include <stdlib.h>

/**
 * main - counts the number of blank, tab and new line characters in the
 * input.
 * Return: 0.
 */

int main(void)
{
        int c, new_line = 0, tab = 0, blank = 0;
        char *test_str = malloc(sizeof(char) * 2048);

        printf("Enter some text: ");
        scanf("%s", test_str);

        printf("%s\n\n", test_str);

        while ((c = getchar()) != EOF)
        {
                if (c == ' ')
                        ++blank;
                else if (c == '\t' || c == '\v')
                        ++tab;
                else if (c == '\n')
                        ++new_line;
        }
        printf("The input has %d blank spaces, %d tabs and %d new lines\n", blank, tab, new_line);
        return (0);
}
