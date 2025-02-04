#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main() {

	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int L = 0;
	
	while(scanf("%d %d %d %d %d", &a, &b, &c, &d, &L)!= EOF) {
		if (a == 0 && b == 0 && c == 0 && d == 0 && L == 0) {
			break;
		}
		int z = 0;

		for (int i = 0; i <= L; i++) {
			int y=0;
			y = a * i * i + b * i + c;
			if (y % d == 0) {
				
				z++;
			}
		}
		printf("%d\n", z);
	}
	return 0;
}