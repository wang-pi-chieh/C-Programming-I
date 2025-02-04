#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int n, k;
	while (scanf("%d%d", &n, &k) != EOF) {
		int sum = n;
		while (n >= k) {
			sum = sum + n / k;
			n = n / k + n % k;
		}
		printf("%d\n", sum);
		
	}
	return 0;
}