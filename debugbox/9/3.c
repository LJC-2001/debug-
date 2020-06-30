#include <stdio.h>
int fun(int n)
{
    if (n == 2 || n == 3)
	return 1;
    if (n == 1)
    	return 0;
    else
        return fun (n - 2) + fun(n - 3);
    }
int main()
{
    int n;
    //int sum = 0;
    
    while (scanf("%d", &n) != EOF) {
    	printf("%d\n", fun(n));
    }
    return 0;
}
