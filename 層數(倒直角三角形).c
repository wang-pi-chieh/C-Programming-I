#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	printf("輸入層數: ");
	int n = 0; //n表示層數
	scanf("%d", &n);

	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}

	/*
	for (int i = 1; i <= n; i++) {
		for (int j = n; j >0 ; j--) {  因為重新跑這個迴圈的時候，會重新帶n=5，所以會一直跑出5個星星
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
	*/
	
