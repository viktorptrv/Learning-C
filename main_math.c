#include <stdio.h>
#include "math.h"

int main(void) {
	int a = 10;
	int b = 5;

	printf_s("Multiplication %d\n", multiplication(a, b));
	printf_s("Division %d\n", divide(a, b));
	printf_s("Sub %d\n", substraction(a, b));
	printf_s("Addition %d\n", addition(a, b));
	
	return 0;
}

