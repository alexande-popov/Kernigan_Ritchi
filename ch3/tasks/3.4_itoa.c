#include <stdio.h>
#include <string.h>
#include <limits.h>

void reverse(char s[])
{
	int temp, i, j;

	for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}

void plus_one(char s[])
{
	if (*s != '9') {
		*s += 1;
	} 
	else {
		char *p = s;
		int extra = 1;
		int digit;

		for(; *p; p++) {
			digit = *p - '0';
			digit += extra;
			if (digit == 10) {
				extra = 1;
				*p = '0';
			} else {
				extra = 0;
				*p = '0' + digit;
			}
		}
		if(extra) {
			*p = '1';
			*(++p) = '\0';
		}
	}
}

void itoa(int n, char s[])
{
	int i, sign;

	int is_int_min = (n == INT_MIN) ? 1 : 0;
	if (is_int_min) n += 1;

	if ((sign = n) < 0)
		n = -n;

	i = 0;
	do {
		s[i++] = n % 10 + '0';
	} while ((n /= 10) > 0);

	s[i] = '\0';

	if (is_int_min) plus_one(s);
	
	if (sign < 0) {
		s[i++] = '-';
		s[i] = '\0';
	}

	
	
	reverse(s);
}

int main()
{
	char s[] = "";
	int n;

	n = 123;
	itoa(n, s);
	printf("%d string: %s\n", n, s);

	n = INT_MAX;
	itoa(n, s);
	printf("INT_MAX=%d string: %s\n", n, s);

	n = -INT_MAX;
	itoa(n, s);
	printf("-INT_MAX=%d string: %s\n", n, s);

	n = -INT_MIN;
	itoa(n, s);
	printf("INT_MIN=%d string: %s\n", n, s);

	return 0;
}