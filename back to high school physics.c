#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int velovity; //a為速度
	int time; //b為時間

	while (scanf("%d %d", &velovity, &time) != EOF) {
		printf("%d\n", 2 * velovity * time);
	}

	return 0;
}


//助教版本
/*
int main() {
	int v, t;  //如果int的數值不夠用，就用long long int
	while (scanf("%d%d", &v, &t) != EOF) {
		printf("%d", 2 * v * t);
	}
}
*/


