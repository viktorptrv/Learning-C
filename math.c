#include <stdio.h>

int addition(int a, int b);
int divide(int a, int b);
int substraction(int a, int b);
int multiplication(int a, int b);

int addition(int a, int b) {
	return a + b;
}

int divide(int a, int b) {
	if (a > b)
		return a / b;
	else
		return b / a;
}

int substraction(int a, int b) {
	return a - b;
}

int multiplication(int a, int b) {
	return a * b;
}