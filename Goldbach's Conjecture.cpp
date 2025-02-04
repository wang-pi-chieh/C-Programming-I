#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int a;
	while (scanf("%d", &a) != EOF) {
		int sum=0;
		if (a == 0) {
			break;
		}
		for (int k = 2; k <= a / 2; k++) {  //透過a/2的方式避免重複算
				//判斷k是否為質數

			for (int b = 2; b <= a - k; b++) {
				//將輸入值扣掉k之後，判斷此數是否為質數
			}
			//若兩者均為質數，則sum++
		}
		//最終輸出有sum之值，即有幾組成立
		printf("%d", sum);
	}
	return 0;
}
