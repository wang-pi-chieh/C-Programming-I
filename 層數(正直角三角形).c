#include <stdio.h>
#include <stdlib.h>
#pragma warning (disable:4996)

int main() {
	printf("輸入層數: ");
	int n = 0; //n表示層數
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}