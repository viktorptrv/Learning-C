#include <stdio.h>

main() {
	char var = 100;
	printf_s("%p\n", &var);

	char* point = &var;
	printf_s("%p\n", &point);

	char value = *point;
	printf_s("%d\n", value);

	*point = 65;
	printf_s("%d", var);
}