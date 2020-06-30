#include <stdio.h>

int main() 
{
    int n = 10;
    int m;
    int numbers[10];
    int i, j, k;
    int max;
    int tmp;
    // input
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    //sort
    for (j = 0; j < n - 1; j++) {
        m = j;
        for (k = j; k < n - 1; k++) {
            if (numbers[m] < numbers[k+1]) {
                m = k + 1;
            }
           
        }
        tmp = numbers[j];
        numbers[j] = numbers[m];
        numbers[m] = tmp;
    }
    //output
    for (i = 0; i < n; i++) {
        if (i == 9) {
            printf("%d", numbers[i]);
        } else {
            printf("%d ", numbers[i]);
        }
    }
    return 0;
}

