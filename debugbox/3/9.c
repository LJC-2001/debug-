#include <stdio.h>

int main() 
{
    int matrix[100][100];
    int m, n;
    int nIndex;
    int mIndex;
    int matrixpass[110][110];
    int orientation = 0;
    int i, j;
    int k, l;
    int times;
    int p = 0;
    //����
    scanf("%d %d", &m, &n);
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    //����
    k = m;
    l = n;
    times = 0;
    mIndex = 0;
    nIndex = 0;
    for (i = 0; i < 110; i++) {
        for (j = 0; j < 110; j++) {
            matrixpass[i][j] = 0;
        }
    }
    while (times < m * n) {
        if (orientation % 4 == 0 && times < m * n) {  //right
            while (matrixpass[mIndex][nIndex] == 0 && nIndex <= l - 1) {
                printf("%d", matrix[mIndex][nIndex]);
                matrixpass[mIndex][nIndex] = 1;
                nIndex++;
                times++;
                if (times != m * n) {
                    printf(" ");
                }
            }
            orientation++;
            mIndex++;
            nIndex--;  
        }
        if (orientation % 4 == 1 && times < m * n) {  //down
        	while (matrixpass[mIndex][nIndex] == 0 && mIndex <= k - 1) {
                printf("%d", matrix[mIndex][nIndex]);
                matrixpass[mIndex][nIndex] = 1;
                mIndex++;
               	times++;
                if (times != m * n) {
                    printf(" ");
                }	
            }
            orientation++;
            mIndex--;
            nIndex--;
        }
        if (orientation % 4 == 2 && times < m * n) {  //left
            while (matrixpass[mIndex][nIndex] == 0 && nIndex >= p) {
                printf("%d", matrix[mIndex][nIndex]);
                matrixpass[mIndex][nIndex] = 1;
                nIndex--;
                times++;
                if (times != m * n) {
                    printf(" ");
                }
            }
            orientation++;
            mIndex--;
            nIndex++;  
        }
        if (orientation % 4 == 3 && times < m * n) {  //up
            while (matrixpass[mIndex][nIndex] == 0 && mIndex >= p + 1) {
                printf("%d", matrix[mIndex][nIndex]);
                matrixpass[mIndex][nIndex] = 1;
                mIndex--;
                times++;
                if (times != m * n) {
                    printf(" ");
                }
            }
            orientation++;
            mIndex++;
            nIndex++;  
        }
        k--;
        l--;
        p++;
    }
    return 0;
}
