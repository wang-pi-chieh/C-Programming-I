#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int a = 0;
	scanf("%d", &a);
	int i;

	for (i = 1; i <= a; i++) {
		int b = 0;
		int c = 0;
		scanf("%d %d", &b, &c);

		if (b < c) {
			printf("<\n");
		}
		else if (b == c) {
			printf("=\n");
		}
		else if(b > c){
			printf(">\n");
		}
	}
	
	return 0;
}