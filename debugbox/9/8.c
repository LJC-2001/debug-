#include <stdio.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int i;
    int a[51] = {0};
    a[1] = 0; 
    a[2] = 1;
    a[3] = 1;
    for (i = 4; i <= n; i++) {
        a[i] = a[i - 2] + a[i - 3];
    }
    printf("%d", a[n]);
    return 0;
}
