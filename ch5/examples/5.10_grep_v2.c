#include <stdio.h>
#include <string.h>

#define MAXLINE 1000 /* максимальный размер вводимой строки */

int my_getline(char line[], int max);

/* найти все строки, содержащие образец */
int main(int argc, char *argv[])
{
    char line[MAXLINE];
    int found = 0;

    char *prog = argv[0];

    if (argc != 2)
        printf("%s usage: find pattern\n", prog);
    else
        while (my_getline(line, MAXLINE) > 0)
            if (strstr(line, argv[1]) != NULL) {
                printf ("%s", line);
                found++;
            }
    
    return found;
}

/* getline: читает строку в s, возвращает длину */
int my_getline(char s[], int lim)
{
    int c, i;
    i = 0;
    while (--lim > 0 && (c = getchar()) != EOF && c != '\n')
        s[i++] = c;

    if (c == '\n')
        s[i++] = c;

    s[i] = '\0';

    return i;
}