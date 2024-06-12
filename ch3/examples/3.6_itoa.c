#include <stdio.h>
#include <string.h>

void reverse(char s[])
{
	int temp, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

void itoa(long long int n, char s[])
{
	int i, sign;

	if ((sign = n) < 0)
		n = -n;

	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);

	if (sign < 0)
		s[i++] = '-';

	s[i] = '\0';

	reverse(s);
}

int main()
{
	char s[] = "";
	itoa(123, s);
	printf("string: %s", s);

	return 0;
}