#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int T=0;
	scanf("%d", &T);
	int i;
	for (i = 1; i <= T; i++) {
		int sum = 0;
		int a = 0, b = 0;
		scanf("%d\n%d", &a, &b);

		if (a == b && a % 2 == 0) {
			printf("Case %d: 0\n", i);
			continue;

		}else if (a % 2 == 0) {
			a++;
			while(a <= b){
				sum = sum + a;
				a = a + 2;
			}
			printf("Case %d: %d\n", i, sum);
		}else if(a % 2 == 1){
			while (a <= b) {
				sum = sum + a;
				a = a + 2;
			}
			printf("Case %d: %d\n", i, sum);
		}
	}
	return 0;
}