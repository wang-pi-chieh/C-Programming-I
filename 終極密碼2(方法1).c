#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int search(int[], int);

int main() {
	srand(time(NULL));
	int num = 0, lower_bound = 0, upper_bound = 0;
	int arr[50] = { 0 };

	int i = 0, j = 0;
	for (i = 0; i <= 49; i++) {  //input arr[]
		do {
			arr[i] = rand() % 100 + 1; //利用rand產生隨機數字，再透過srand 讓每次產生的數值不相同
			for (j = 0; j < i; j++) { //用for迴圈確定數值不重複
				if (arr[j] == arr[i]) {
					break; //如果出現相同數值，即跳出for迴圈，重新做一次do
				}
			}
		} while (j != i); //當j和i不相等，即未產生相同，即再進行一次do

		/*printf("%d ", A[i]);*/
	}

	//氣泡排序法
	int temp = 0;
	for (int m = 0; m <= 49; m++) {  //記錄現在第幾輪
		for (int k = 0; k <= 48 - m; k++) {  //扣掉m是指到這一round的時候已經有m個數字排好了
			if (arr[k] > arr[k + 1]) {
				temp = arr[k + 1];
				arr[k + 1] = arr[k];
				arr[k] = temp;
			}
		}
	}
	//output出 從1~100隨機取50個數且排序
	for (int n = 0; n <= 49; n++) {
		printf("%d ", arr[n]);
	}
	//隨機選數字為答案
	int password = arr[rand() % 50];
	printf("\n");
	lower_bound = arr[0];
	upper_bound = arr[49];
	//printf("%d\n", password);

	printf("%d~%d\n", lower_bound, upper_bound);
	scanf("%d", &num);
	while (num != password) {
		if (search(arr, num)) {  //寫出一個函式，判斷num是否在範圍內(隨機存取出的50個數字)
			printf("num not in range\n");
			scanf("%d", &num);
		}
		else if (num < password) {
			printf("higher\n");
			lower_bound = num;
			printf("%d~%d\n", lower_bound, upper_bound);
			scanf("%d", &num);
		}
		else if (num > password) {
			printf("lower\n");
			upper_bound = num;
			printf("%d~%d\n", lower_bound, upper_bound);
			scanf("%d", &num);
		}
	}
	printf("correct\n");

	return 0;
	system("pause");

}

int search(int arr[], int num) {
	for (int g = 0; g <= 49; g++) {
		if (num == arr[g]) {
			return 0;
		}
	}
	return 1;
}


