#include <stdlib.h>
#pragma warning(disable:4996)

void bubble_sort(int[], int);
int binary_search(int[], int, int);

int main() {
	int k = 0, n; // k為是否在n個整數內
	int arr[] = { 0 };
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", arr[i]);
	}
	bubble_sort(arr, n); //arr後面不用加[]

	//for (int i = 0; i < n ; i++) {
	//	printf("%d ", arr[i]);
	//}

	while (scanf("%d", &k) != EOF) {
		if (binary_search(arr, k, n)) {
			printf("%d found\n", k);
		}
		else {
			printf("%d not found\n", k);
		}
	}
}




void bubble_sort(int a[], int end) {
	for (int i = 0; i < end ; i++) {
		for (int j = 0; j < end - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}

int binary_search(int arr[], int k, int n) {
	int num_start = 0; //num_start所代表的是在array的第幾個位置
	int num_end = n - 1;  //num_end所代表的是在array的第幾個位置
	
	while (num_start <= num_end) {
		int half = (num_start + num_end) / 2;
		if (arr[half] == k) {
			return 1;
		}
		else if (arr[half] < k) {
			num_start = half + 1;
		}
		else if (arr[half] > k) {
			num_end = half - 1;
		}
		
	}
	return 0;
}