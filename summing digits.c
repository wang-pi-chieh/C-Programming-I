#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int x(int);

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) {
			break;
		}
		printf("%d\n", x(n));
	}
	return 0;
}

int x(int n) {
	int sum = 0;
	while (n / 10 != 0) {   //要注意測資為110，所以不可以用n%10
		sum = sum + n % 10;
		n = n / 10;
	}
	sum = sum + n;
	
	if (sum / 10 == 0) {
		return sum;
	}
	else {
		return x(sum);
	}
}







/*

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int x(int);

int main() {
	int n;
	while (scanf("%d", &n) != EOF) {
		if (n == 0) {
			break;
		}

		int sum = 0;
		while (n % 10 != 0) {
			sum = sum + n % 10;
			n = n / 10;
		}
		sum = sum + n;
		printf("%d", sum);


	}
	return 0;
}

*/