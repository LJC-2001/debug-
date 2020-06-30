#include <stdio.h>

int main()
{
    int matrix[100][100];
    int m;
    int n;
    
    scanf("%d%d", &m, &n);
    
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int start = 0, column = n, row = m, sign = 0;
    while (start < column && start < row) {
        if (n == 1) {
            for (int i = 0; i < m; i++) {
                if (i == m - 1){
                    printf("%d", matrix[i][0]);
                } else
                printf("%d ", matrix[i][0]);
            }
        } else  if (m == 1) {
            for (int j = 0; j < n; j++) {
                if (j == n - 1) {
                    printf("%d", matrix[0][j]);
                } else
                printf("%d ", matrix[0][j]);
            }
        } else {
            for (int j = start; j < column; j++) {
                if (sign == n * m)
                    break;
                printf("%d", matrix[start][j]);
                sign++;
                if (sign != n * m) {
                    printf(" ");
                }
            }
            for (int i = start + 1; i < row; i++) {
                if (sign == n * m)
                    break;
                printf("%d", matrix[i][column-1]);
                sign++;
                if (sign != n * m) {
                    printf(" ");
                }
            }       
            for (int j = column-2; j >= start; j--) {
                if (sign == n * m)
                    break;
                printf("%d", matrix[row-1][j]);
                sign++;
               if (sign != n * m) {
                    printf(" ");
                }
            }
            for (int i = row-2; i > start; i--) {
                if (sign == n * m)
                    break;
                printf("%d", matrix[i][start]);
                sign++;
                if (sign != n * m) {
                    printf(" ");
                }
            }
        }
        start++;
        column--;
        row--;
        if (sign == n * m)
            break;
    }



    return 0;
}
