// Static Exercise

#include <stdio.h>

/*
static int count = 0;

void func_to_call(void);

int main() {
	for (int i = 0; i <= 5; i++)
		func_to_call();

	return 0;
}

void func_to_call(void) {
	count += 1;
	printf_s("Count is %d\n", count);
}
*/

static int sum = 0;
static int a = 10;
static int b = 5;

void addition_a_b(void);
void divide_a_b(void);

int main() {
	for (int i = 0; i <= 5; i++) {
		if (i % 2 == 0) {
			addition_a_b();
		}
		else {
			divide_a_b();
		}
	}
	return 0;
}

void addition_a_b(void) {
	sum += (a + b);
	printf_s("Sum is %d\n", sum);
}

void divide_a_b(void) {
	sum += (a / b);
	printf_s("Sum is %d\n", sum);
}