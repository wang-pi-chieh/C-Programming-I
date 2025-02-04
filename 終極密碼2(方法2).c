#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int main() {
	int arr[50] = { 0 };
	srand(time(NULL));
	for (int i = 0; i <= 49; i++) {
		int j;
		do {
			arr[i] = rand() % 100 + 1;
			for (j = 0; j < i; j++) {//比到i的前一個數
				if (arr[i] == arr[j]) {//比較這次的亂數在以前有無出現過
					break;//跳出for迴圈，重新再亂碼一次 i
				}
			}//如果都沒有重複到，i = j，因為先 j++ 後才看 j < i
		} while (j != i);
	}
	for (int k = 0; k <= 49; k++) {
		for (int j = 0; j <= 48 - k; j++) {
			int temp = 0;
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i <= 49; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
	printf("%d~%d\n", arr[0], arr[49]);
	int ans = arr[rand() % 50];
	int num = 0;
	scanf("%d", &num);

	int n = 0;
	int m = 49;
	while (num != ans) {
		int exist = 0;
		for (int i = 0; i <= 49; i++) {
			if (num == arr[i]) {
				exist = exist + 1;
			}
		}
		if (exist == 0) {
			printf("num not in range\n");
			scanf("%d", &num);
		}
		if (exist == 1) {
			if (num > ans) {
				printf("lower\n");
				printf("%d~%d\n", arr[n], num);
				for (int i = 0; i <= 49; i++) {
					if (num == arr[i]) {
						m = i;
					}
				}
				scanf("%d", &num);
			}
			if (num < ans) {
				printf("higher\n");
				printf("%d~%d\n", num, arr[m]);
				for (int i = 0; i <= 49; i++) {
					if (num == arr[i]) {
						n = i;
					}
				}
				scanf("%d", &num);
			}
		}
	}
	printf("correct\n");

	system("pause");
	return 0;
}