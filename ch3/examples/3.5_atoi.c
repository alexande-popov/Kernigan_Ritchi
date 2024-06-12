#include <stdio.h>
#include <ctype.h>

// int isspace(int c) { return (c == ' ' || c == '\n' || c == '\t') ? 1 : 0; }
// int isdigit(int c) { return (c >= '1' || c <= '9') ? 1 : 0; }

int atoi(char s[])
{
	int i, n, sign;

	// skip spaces
	for (i = 0; isspace(s[i]); i++)
		;

	sign = (s[i] == '-') ? -1 : 1;
	// skip sign;
	if (s[i] == '+' || s[i] == '-')
		i++;

	for (n = 0; isdigit(s[i]); i++)
		n = 10 * n + (s[i] - '0');

	return sign * n;
}

int main()
{
	int num = atoi("123");
	printf("%d\n", num);

	num = atoi("0");
	printf("%d\n", num);

	num = atoi("-123");
	printf("%d\n", num);

	num = atoi("+123");
	printf("%d\n", num);

	num = atoi("2147483648");
	printf("Overflow for 2147483648: %d\n", num);

	num = atoi("-2147483649");
	printf("Overflow for -2147483649: %d\n", num);

	return 0;
}