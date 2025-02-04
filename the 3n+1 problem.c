#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int i, j = 0;
	int m=0, n = 0;
	
	while (scanf("%d%d", &i, &j) != EOF) {
		if (i > j) {
			m = i;
			n = j;
		}
		else if (j > i) {
			m = j;
			n = i;
		}
		int max = 0;
		
		for (int k = n; k <= m; k++) {
			int a = 1;
			int b = k;
			while (b > 1) {
				if (b %2 == 0) {
					b /= 2;
				}
				else if (b % 2 == 1) {
					b = 3 * b + 1;
				}
				a++;
			}
			if (a > max) {
				max = a;
			}
		}
		printf("%d %d %d\n", i, j, max);

	}

	return 0;
}
