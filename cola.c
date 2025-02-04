#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int main() {
	int n = 0;

	while (scanf("%d", &n) != EOF) {
		int sum = 0;

		sum = n + n / 2;
		printf("%d\n", sum); //記得換行!!

	}
	return 0;
}