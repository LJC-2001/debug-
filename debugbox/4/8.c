#include <stdio.h>

int main() 
{
    int n = 10;
    int m;
    int numbers[10];
    int i;
    int max;
    int inter;
    //input
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    //sort
    for (i = 0; i <= 8; i++) {
        max = i;
        for (m = i; m <= 8; m++) {
            if (numbers[max] < numbers[m+1]) {
                max = m + 1;
            }
        }
        inter = numbers[i];
        numbers[i] = numbers[max];
        numbers[max] = inter;
    }
    //output
    for (i = 0; i <= 9; i++) {
        printf("%d", numbers[i]);
        if (i != 9) {
            printf(" ");
        }
    }

    return 0;
}
