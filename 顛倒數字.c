#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	printf("輸出一個整數: ");
	int num=0;
	scanf("%d", &num);
	int x;

	printf("倒過來: ");

	while (num>0) {
		x=num % 10;
		num /= 10;
		printf("%d", x);
	}

	printf("\n");
	
	
	system("pause");
	return 0;
}

//用餘數的想法去思考，慢慢輸出成54321
//