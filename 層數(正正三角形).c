#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	printf("輸出層數: ");
	int n = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) { //此迴圈表示跑總共有幾層
		for (int j = 0; j < n - (i - 1); j++) { //此迴圈表示跑總共有幾個空格
			printf(" ");
		}
		for (int k = 0; k < i; k++) { //此迴圈表示跑總共有幾個星星
			printf("* ");
		}
		printf("\n");

	}
}