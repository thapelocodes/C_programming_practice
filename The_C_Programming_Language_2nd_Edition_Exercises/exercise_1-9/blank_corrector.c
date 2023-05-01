#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/**
 * main - counts the number of blank, tab and new line characters in the
 * input.
 * Return: 0.
 */

bool remove_char(char *str, int pos);

int main(void)
{
        int i = 0;
        char *test_str = malloc(sizeof(char) * 2048);
        bool result;

        printf("Enter some text: ");

        scanf("%[^\n]s", test_str);

        printf("%s\n", test_str);

        while (test_str[i])
        {
                if (test_str[i] == ' ' && test_str[i + 1] == ' ')
                {
                        result = remove_char(test_str, i + 1);
                        if (result)
                                printf("Char removed from string.\n");
                        else
                                printf("Char not removed from string.\n");
                        i--;
                }
                i++;
        }

        printf("%s\n", test_str);

        return (0);
}

bool remove_char(char *str, int pos)
{
        int len = strlen(str), i;

        if (pos >= len)
                return (false);

        for (i = pos; i < len; i++)
                str[i] = str[i + 1];
        return (true);
}
