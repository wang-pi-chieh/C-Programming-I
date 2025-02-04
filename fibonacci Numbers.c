#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int fibonacci(int);

int main() {
	int n = 0;
	while (scanf("%d", &n) != EOF) {
		printf("%d", fibonacci(n));
		
	}
	return 0;
}

int fibonacci(int n) {
	int a = 0;
	int b = 1;
	int c = 0;
	for (int i = 1; i < n; i++) {
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}