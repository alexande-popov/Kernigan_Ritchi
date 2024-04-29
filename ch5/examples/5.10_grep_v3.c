#include <stdio.h>
#include <string.h>

#define MAXLINE 1000 /* максимальный размер вводимой строки */

int my_getline(char line[], int max);

/* найти все строки, содержащие образец */
int main(int argc, char *argv[])
{
    char line[MAXLINE];
    long lineno;
    int c;
    int except = 0, number = 0, found = 0;

    char *prog = argv[0];

    while (--argc > 0 && (*++argv)[0] == '-')
        while ((c = *++argv[0]))
            switch (c)
            {
            case 'x':
                except = 1;
                break;
            case 'n':
                number = 1;
                break;
            default:
                printf("%s: illegal option %c\n", prog, c);
                argc = 0;
                found = -1;
                break;
            }

    if (argc != 1)
        printf("Usage: %s -x -n pattern\n", prog);
    else
        while (my_getline(line, MAXLINE) > 0) {
            lineno++;
            if ((strstr(line, *argv) != NULL) != except) {
                if (number)
                    printf ("%ld:", lineno);
                printf ("%s", line);
                found++;
            }
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