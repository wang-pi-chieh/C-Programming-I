#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning (disable:4996)


int GCD(int,int);

int main() {
	int N;
	while (scanf("%d", &N) != EOF) {
		if (N == 0) {
			break;
		}
		int G = 0;
		for (int i = 1; i < N; i++) {
			for (int j = i + 1; j <= N; j++) {
				G += GCD(i, j);
			}
		}

		printf("%d\n", G);
	}
}

int GCD(int m, int n){
	while (m != 0 && n != 0) {
		return GCD(n, m % n);
	}
	return m;
}