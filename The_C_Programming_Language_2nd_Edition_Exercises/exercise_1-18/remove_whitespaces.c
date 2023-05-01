#include <stdio.h>

#define MAXLINE 1000

int _getline(char line[], int lim);
void print_corrected_line(char str[], int lim);

int main(void)
{
        int len;
        char line[MAXLINE*MAXLINE];

        while ((len = _getline(line, MAXLINE*MAXLINE)) > 0)
        {
                print_corrected_line(line, len);
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

void print_corrected_line(char line[], int lim)
{
        int i = 0, j = 0;
        /* char corrected_line[]; */

        for (; i < lim && (line[i] != '\0' && line[i] != '\n'); i++)
        {
                if ((line[i] == ' ' && line[i + 1] == ' ') || (line[i] == ' ' && line[i + 1] == '\n') || line[i] == '\t')
                        continue;
                if ((line[i] == ' ' && line[i + 1] == '\t' && line[i + 2] == ' ') || (line[i] == ' ' && line[i + 1] == '\t' && line[i + 2] == '\n'))
                        continue;
                else if (line[i] != ' ')
                       j++;
                putchar(line[i]);
        }
        if (j > 0)
                putchar('\n');
}
