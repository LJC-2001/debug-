#include <stdio.h>

int main()
{
    int n, i, j, m;
    scanf ("%d" , &n);
    m = n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= (n - i + 1); j++, m--) {
            printf("%d", m);
            if (j != (n - i + 1))
                printf (" ");
            else
                printf ("\n");
        }
        m = n - i;

    }
    
    
    return 0;
}
