#include <stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int main() {
	int a = 0; //x為輸入的年份
	scanf("%d", &a);

	if (a % 4 == 0) {
		if (a % 100 == 0) {
			if (a % 400 == 0) {
				printf("Y\n");
			}
			else {
				printf("N\n");
			}
		}
		else {
			printf("Y\n");
		}
	}
	else {
		printf("N\n");
	}
	return 0;
}


