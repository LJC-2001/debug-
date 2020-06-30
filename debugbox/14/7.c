#include <stdio.h>

int main()
{
    int i, j, n;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
    	for (j = n - i + 1; j >= 1; j--) {
    	    if (j == 1) {
    		printf("%d", j);
	    } else {
		printf("%d ", j);
	    } 
	} 
	printf("\n");      
    }   
    return 0;
}
