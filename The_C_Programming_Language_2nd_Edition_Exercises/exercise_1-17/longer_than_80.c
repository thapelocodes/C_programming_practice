#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int lim);

int main(void)
{
        int len;
        char line [MAXLINE*MAXLINE];

        while ((len = _getline(line, MAXLINE*MAXLINE)) > 0)
        {
                if (len > 80)
                        printf("%s", line);
        }

        return (0);
}

int _getline(char str[], int lim)
{
        int c, i = 0;

        for (; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
               str[i] = c;
        if (c == '\n')
        {
                str[i] = c;
                ++i;
        }
        str[i] = '\0';
        return (i);
}
