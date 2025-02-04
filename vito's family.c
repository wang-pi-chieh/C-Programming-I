#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable:4996)

int main() {
    int test;
    int r; //r is the number of relatives
    int s[30000] = { 0 }; // s is the street number
    scanf("%d", &test);
    for (int i = 0; i < test; i++) {
        scanf("%d", &r);
        for (int j = 0; j < r; j++) {
            scanf("%d", &s[j]);
        }
        int temp;
        for (int m = 0; m < r; m++) {
            for (int n = 0; n < r - 1 - m; n++) {
                if (s[n] > s[n + 1]) {
                    temp = s[n];
                    s[n] = s[n + 1];
                    s[n + 1] = temp;
                }
               
            }
        }
        int middle = s[r / 2];

        int distance = 0;
        for (int p = 0; p < r; p++) {
            distance = distance + abs(middle - s[p]);
        }

        printf("%d\n", distance);
    }
    return 0;
}
