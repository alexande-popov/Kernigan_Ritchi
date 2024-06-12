#include <stdio.h>
#include <limits.h>

void print_defenitions();
void find_min_int();
void find_max_int();

int main() {
	print_defenitions();
	printf("\n");
	find_min_int();
	find_max_int();

	return 0;
}

void print_defenitions() {
	printf("==== char ====\n");
	printf("CHAR_BIT %d\n", CHAR_BIT);
	printf("CHAR_MIN %d\n", CHAR_MIN);
	printf("CHAR_MAX %d\n", CHAR_MAX);
	printf("SCHAR_MIN %d\n", SCHAR_MIN);
	printf("SCHAR_MAX %d\n", SCHAR_MAX);
	printf("UCHAR_MAX %d\n", UCHAR_MAX);
	
	printf("==== int ====\n");
	printf("INT_MIN %d\n", INT_MIN);
	printf("INT_MAX %d\n", INT_MAX);
	printf("UINT_MAX %d\n", UINT_MAX);

	printf("==== short ====\n");
	printf("SHRT_MIN %d\n", SHRT_MIN);
	printf("SHRT_MAX %d\n", SHRT_MAX);
	printf("USHRT_MAX %d\n", USHRT_MAX);

	printf("==== long ====\n");
	printf("LONG_MIN %ld\n", LONG_MIN);
	printf("LONG_MAX %ld\n", LONG_MAX);
	printf("ULONG_MAX %ld\n", ULONG_MAX);

	printf("==== long long ====\n");
	printf("LLONG_MIN %lld\n", LLONG_MIN);
	printf("LLONG_MAX %lld\n", LLONG_MAX);
	printf("ULLONG_MAX %lld\n", ULLONG_MAX);
}

void find_min_int() {
	int curr = 0;
	int prev = 1;
	for (; curr < prev; curr--, prev--)
		;
	printf("find min int %d\n", prev);
}

void find_max_int() {
	int curr = 1;
	int prev = 0;
	for (; curr > prev; curr++, prev++)
		;
	printf("find max int %d\n", prev);
}