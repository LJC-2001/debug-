#include <stdio.h>
#include<math.h>


int main()
{
    int matrix[100][100];
    int m;
    int n;
    int i, j;
    int x;
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
    	for (j = 0; j < n; j++) {
    		scanf("%d", &matrix[i][j]);
		}
	}
	x = 0;
	int sign = 0;
	while (m - x >= 1 && n - x >= 1) {
		for (i = x; i < n - x && sign != m * n; i++) {
			printf("%d", matrix[x][i]);
			sign++;
			if (sign != m * n) {
				printf(" ");
			}
		}
		for (i = x + 1; i < m - x && sign != m * n; i++) {
			printf("%d", matrix[i][n - 1 - x]);
			sign++;
			if (sign != m * n) {
				printf(" ");
			}  
		}
		for (i = n - x - 2; i > x && sign != m * n; i--) {
			printf("%d", matrix[m - 1 - x][i]);
			sign++;
			if (sign != m * n) {
				printf(" ");
			}
		}
		for (i = m - x - 1; i > x && sign != m * n; i--) {
			printf("%d", matrix[i][x]);
			sign++;
			if (sign != m * n) {
				printf(" ");
			}
		}
		x++;
	}	

    return 0;
}

