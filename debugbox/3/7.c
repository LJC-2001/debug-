#include <stdio.h>

int main() 
{
    int matrix[100][100];
    int m, n;
    int i, j;
    int k = 0;
    int startX = 0;
    int startY = 0;
    int endX;
    int endY;
   //¿¿¿¿m¿¿¿n
    scanf("%d %d", &m, &n);
    // ¿¿¿¿m*n¿¿¿
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
   
    // ¿¿¿¿¿¿¿¿¿
    while (startX * 2 < m && startY * 2 < n) {
        endX = m - 1 - startX;
        endY = n - 1 - startY;
        // ¿¿¿¿¿
        if (startY <= endY) {
            for (j = startY; j <= endY; j++) {
                printf("%d", matrix[startX][j]);
                k++;
                if (k != m * n) {
                    printf(" ");
                }
            }
        } 
        //¿¿¿¿¿¿¿¿¿¿¿
        if (startX < endX) {
            for (j = startX + 1; j <= endX; j++) {
                printf("%d", matrix[j][endY]);
                k++;
                if (k != m * n) {
                    printf(" ");
                }
            }
        }
        //¿¿¿¿¿¿¿¿¿¿¿
        if (endX > startX && startY < endY) {
            for (j = endY - 1; j >= startY; j--) {
                printf("%d", matrix[endX][j]);
                k++;
                if (k != m * n) {
                    printf(" ");
                }
            }
        }
        //¿¿¿¿¿¿¿¿¿¿¿
        if (endX - 1 > startX && startY < endY) {
            for (i = endX - 1; i >= startX + 1; i--) {
                printf("%d", matrix[i][startX]);
                k++;
                if (k != m * n) {
                    printf(" ");
                }
            }
        }
        startX++;
        startY++;
    }
    return 0;
}
