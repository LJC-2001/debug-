#include<stdio.h>
#include<math.h>

int main() 
{
    int a, b, c;
    scanf("%d-%d-%d", &a, &b, &c);
    
    if (b < 1 || b > 12) {
	    printf("NO");
	} else if ( (b == 1 || b == 3 || b == 5 || b == 7 || b == 8 || b == 10 || b == 12) && (c < 1 || c > 31) ) {
	    printf("NO");
	} else if ( (b == 4 || b == 6 || b == 9 || b == 11) && (c < 1 || c > 30) ) {
		printf("NO");
	}else if ( ( a % 400 == 0 || (a % 4 == 0 && a % 100 != 0) ) && b == 2 && (c < 1 || c > 29) ) {
	    printf("NO");
	} else if ( !( a % 400 == 0 || (a % 4 == 0 && a % 100 != 0) ) && b == 2 && (c < 1 || c > 28) ) {
	    printf("NO");
	} else {
	    printf("YES");
	}
    return 0;    
}
