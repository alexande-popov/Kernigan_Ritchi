#include <stdio.h>

void filecopy(FILE *ifp, FILE *ofp);

/* cat: concatinations of files */
int main (int argc, char **argv) 
{
    FILE *fp;
    if (argc == 1) /* no arguments; standart input */
        filecopy(stdin, stdout);
    else
        while (--argc > 0)
            if ((fp = fopen(*++argv, "r")) == NULL) {
                printf("cat: can't open %s\n", *argv);
            } else {
                filecopy(fp, stdout);
                fclose(fp);
            }
    return 0;
}

/* Copy file ifp into file ofp */
void filecopy(FILE *ifp, FILE *ofp)
{
    int c;
    while ((c = getc(ifp)) != EOF)
        putc(c, ofp);
}