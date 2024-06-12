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

int main()
{
	char s[] = "abc";
	reverse(s);
	printf("Reversed: %s\n", s);

	char s1[] = "abcd";
	reverse(s1);
	printf("Reversed: %s\n", s1);

	char s2[] = "ab\ncd";
	reverse(s2);
	printf("Reversed: %s\n", s2);

	return 0;
}