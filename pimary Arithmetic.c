#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	while (1) {  //括號內放1和EOF的差別是?
		int a, b, c = 0, sum = 0;
		scanf("%d%d", &a, &b);  //一開始先讀兩個數字
		if (a == 0 && b == 0) { //如果a,b均為0，則break
			break;
		}
		while (a > 0 || b > 0 || c > 0) { //c用來記錄是否有進位
			int aa, bb;
			aa = a % 10;
			a /= 10;
			bb = b % 10;
			b /= 10;
			if (aa + bb + c >= 10) {
				sum++;  //sum用來記錄總共進位幾次
				c = 1;
			}
			else {
				c = 0;
			}
		}
		if (sum == 0) {
			printf("No carry operation.\n");
		}
		else if (sum == 1) {
			printf("1 carry operation.\n");
		}
		else {
			printf("%d carry operations.\n", sum);
		}
	}
	return 0;
}
