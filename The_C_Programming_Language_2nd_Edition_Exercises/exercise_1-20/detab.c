#include <stdio.h>
#include <stdlib.h>

#define TABW 8
#define MAXLINE (1024 * 1024)

int _getline(char *str, int lim)
{
        int c, len = 0;

        for (; len < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++len)
                str[len] = c;
        if (c == '\n')
        {
                str[len] = c;
                ++len;
        }
        str[len] = '\0';
        return (len);
}

char *detab(char *str, int len)
{
        char *new_str = malloc(sizeof(char) * MAXLINE);
        int i = 0, j = 0, pos = 1, nt;

        for (; i < len; i++)
        {
                if (str[i] == '\n')
                {
                        new_str[j] = str[i];
                        pos = 1;
                        j++;
                }
                else if (str[i] == '\t')
                {
                        for (nt = TABW - ((pos - 1) % TABW); nt > 0; nt--)
                        {
                                new_str[j] = ' ';
                                pos++;
                                j++;
                        }
                }
                else
                {
                        new_str[j] = str[i];
                        pos++;
                        j++;
                }
        }

        return (new_str);
}

int main(void)
{
        char *str = malloc(sizeof(char) * MAXLINE);
        char *new_str;
        int len = 0;

        while((len = _getline(str, MAXLINE)) > 0)
        {
                new_str = detab(str, len);
                printf("%s", str);
        }

        free(str);
        free(new_str);
        return (0);
}
