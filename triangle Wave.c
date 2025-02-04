#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)


int main() {
	int num = 0; //num 表示測資數
	scanf("%d", &num);

	for (int i = 0; i < num; i++) { //跑有幾組測資
		int Amplitude = 0;
		int Frequency = 0;
		scanf("%d%d", &Amplitude, &Frequency);
		for (int l = 1; l <= Frequency; l++) { //表第幾個波型
			for (int j = 1; j <= Amplitude; j++) { //output出正直角三角形，表示在第幾行
				for (int k = 1; k <= j; k++) { //一行之中會有幾個數字
					printf("%d", j);  //輸出k還是j?看在第幾行就輸出該數字
				}
				printf("\n");
			}
			for (int j = Amplitude - 1; j >= 1; j--) { //output出倒直角三角形
				for (int k = j; k >= 1; k--) { //一行之中會有幾個數字
					printf("%d", j);  //輸出k還是j?看在第幾行就輸出該數字
				}
				printf("\n");
			}
			if (l != Frequency || i != num-1) {
				printf("\n");
			}

			
		}
	}
}