#include <stdio.h>

int main() 
{
    int num;
    int i, j;
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        for (j = num - i + 1; j >= 1; j--) {
            printf("%d", j);
            if (j != 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
