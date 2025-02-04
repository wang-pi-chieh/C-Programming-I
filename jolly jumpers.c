#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)

int absolute(int[], int);

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        int num[3000] = { 0 };

        for (int i = 0; i < n; i++) {
            scanf("%d", &num[i]);
        }
        
        if (absolute(num, n)) {
            printf("Not jolly\n");
        }
        else {
            printf("Jolly\n");
        }
       
    }
    return 0;
}


int absolute(int num[], int n) {
    int a[3000] = { 0 };
    for (int i = 0; i < n - 1; i++) {
        a[i] = abs(num[i] - num[i + 1]);
       
    }


    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 2 - i; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    //for (int j = 0; j < n - 1; j++) {
    //    printf("%d ", a[j]);
    //}

    for (int i = 0; i < n - 1; i++) {
        if (a[i] == a[i + 1] || a[i] > n - 1 || a[i] == 0) {
            return 1;
        }
    }
    return 0;
    
}
