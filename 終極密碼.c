#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable:4996)

int main() {
	int n, m, password;
	password = rand();

	while (scanf("%d%d", &n, &m) != EOF) {
		int num;
		scanf("%d", &num);

		while (num != password) {
			if (num > password) {
				m = num - 1;
				printf("lower\n");
				printf("%d~%d\n", n, m);
			}
			else if(num < password){
				n = num + 1;
				printf("higher\n");
				printf("%d~%d\n", n, m);
			}
			scanf("%d", &num);

			while (num <= n || num >= m) {
				printf("num not in range\n");
				scanf("%d", &num);
			}
		}
		printf("correct");
		system("pause");
		return 0;
	}
}