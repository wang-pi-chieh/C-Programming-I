#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	printf("終極密碼\n");
	int password = 66; //設定已知的密碼
	int num = 0;
	int down = 0, up = 100;//上下界
	printf("請輸入一個0-100的數：");
	scanf("%d", &num);

	while (num <= down || num >= up) { //防止第一個輸入數就超出範圍
		printf("請介於範圍之內\n");
		printf("請輸入一個數字：");
		scanf("%d", &num);
	}
	printf("\n");
	while (num != password) { //當輸入數不等於密碼就一直執行迴圈
		printf("不對\n");
		if (num < password) {
			down = num; //輸入數取代下界
			printf("數字界於%d~%d\n", down, up);
		}
		else {
			up = num;
			printf("數字界於%d~%d\n", down, up);
		}
		printf("請輸入一個數字：");
		scanf("%d", &num);

		while (num <= down || num >= up) {
			printf("請介於範圍之內\n");
			printf("請輸入一個數字：");
			scanf("%d", &num);
		}
		printf("\n");
	}
	printf("猜中囉!\n遊戲結束\n");
	system("pause");
	return 0;
}