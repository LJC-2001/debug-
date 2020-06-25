#include <stdio.h>

void swap(int *a, int *b) {
    int c;
    if(*a <= *b){
        c = *a;
        *a = *b;
        *b = c;
    }
}

int main() {
    int n = 10;
    int m;
    int numbers[10];
    int i, j;
    
    // inout
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    //maopao sort
    for (i = 0; i < n - 1; i++) {
        for(j = 0; j < n - 1; j++) {
            swap(&numbers[j], &numbers[j + 1]);
        }
    }
    //output
    for (i = 0; i < n; i++) {
        printf("%d", numbers[i]);
        if (i != n - 1 ) {
            printf(" ");
        }
    }
    return 0;
}
