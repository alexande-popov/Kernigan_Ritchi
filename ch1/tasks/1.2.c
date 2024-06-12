#include <stdio.h>

int main()
{
	printf("\a\n");

	printf("abc\b");
	printf("123\n");

	printf("abc\fdsa");

	printf("\nabc\r");
	printf("456\n");

	printf("\vqwe\vqwe");

	// error
	// printf("\u");
	
	return 0;
}