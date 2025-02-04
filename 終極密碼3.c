#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#pragma warning(disable:4996)

int search(int[], int);

int main() {
    srand(time(NULL));
    int num = 0;
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
    for (int m = 0; m <= 49; m++) {
        for (int k = 0; k <= 48 - m; k++) {
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
   /* printf("%d\n", password);*/
    
    int min = 0;
    int max = 49;
    //printf("%d\n", password);

    printf("%d~%d\n", arr[min], arr[max]);
    num = arr[24];  //電腦猜的數字
    printf("Auto guess: %d\n", num);
    
    int mid = (min + max) / 2;
    if (password == arr[mid]) {
        printf("correct\n");
    }
    else {
        while (password != num) {
            if (password < arr[mid]) {
                printf("lower\n");
                printf("%d~%d\n", arr[min], arr[mid]);
                max = mid;
                mid = (min + max) / 2;
                num = arr[mid];
                printf("Auto guess: %d\n", arr[mid]);
            }
            else if (password > arr[mid]) {
                printf("higher\n");
                printf("%d~%d\n", arr[mid], arr[max]);
                min = mid;
                mid = (min + max) / 2;
                num = arr[mid];
                printf("Auto guess: %d\n", arr[mid]);

            }
        }
        printf("correct\n");
    }
   
    return 0;
    system("pause");

}

//int search(int arr[], int num) {
//    int min = 0;
//    int max = num - 1;
//    int mid = (min + max) / 2;
//    if (num == arr[mid]) {
//        return 1;
//
//    }
//    else if (num < arr[mid]) {
//        printf("%d~%d", arr[0], arr[mid]);
//        printf("lower");
//        max = mid - 1;
//        mid = (min + mix) / 2;
//        printf("Auto guess: %d", arr[mid]);
//        return 0;
//    }
//    else if (num > arr[mid]) {
//        printf("%d~%d", arr[mid], arr[max]);
//        printf("higher");
//        min = mid + 1;
//        mid = (min + mix) / 2;
//        printf("Auto guess: %d", arr[mid]);
//        return 0;
//    }
//}