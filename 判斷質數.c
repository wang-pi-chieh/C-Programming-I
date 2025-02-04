#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)

void prime(int);

int main() {
	int x;
	while (scanf("%d", &x) != EOF) {
		prime(x);
	}

}

void prime(int n) {
	int x;
	x = sqrt(n);
	for (int i = 2; i <= x ; i++) {
		if (n % i == 0) {
			printf("%d 不是質數\n", n);
			return;
		}
	}
	printf("%d 是質數\n", n);
	return;
}