#include <stdio.h>
#include <string.h>

#define MAXLINE 1024

void reverse(char str[], int size)
{
        int j = size - 2, i = 0;
        char temp;

        for (; i < j; i++)
        {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
                j--;
        }
}

int _getline(char str[], int lim)
{
        int c, i = 0;

        for (; i < lim - 1 && (c= getchar()) != EOF && c != '\n'; i++)
                str[i] = c;
        if (c == '\n')
        {
                str[i] = c;
                i++;
        }
        str[i] = '\0';

        return (i);
}

void print_arr(char str[], int size)
{
        int i = 0;

        for (; i < size - 1; i++)
                putchar(str[i]);
        putchar('\n');
}

int main(void)
{
        int size = 0;
        char line[MAXLINE*MAXLINE];

        while ((size = _getline(line, MAXLINE*MAXLINE)) > 0)
        {
                reverse(line, size);
                print_arr(line, size);
        }

        return (0);
}
