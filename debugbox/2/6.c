#include <stdio.h>
#include <math.h>

int main() 
{
    int matrix_a[10][10];
    int matrix_b[10][10];
    int matrix_result[15][15] = {0};
    int m;
    int n;
    scanf("%d %d", &m, &n);

    int mIndex;
    int nIndex;
    int j;
    //creat matrix_a (m * n)
    for(mIndex = 0; mIndex < m; mIndex ++){
        for(nIndex = 0; nIndex < n; nIndex ++){
            scanf("%d", &matrix_a[mIndex][nIndex]);
        }
    }
    //creat matrix_b (n * m)
    for(nIndex = 0; nIndex < n; nIndex ++){
        for(mIndex = 0; mIndex < m; mIndex ++){
            scanf("%d", &matrix_b[nIndex][mIndex]);
        }
    }
    //matrix_a * matrix_b = matrix_result (m * m)
    for(mIndex = 0; mIndex < m; mIndex ++){
        for(nIndex = 0; nIndex < m; nIndex ++){
            for(j = 0; j < n; j ++){
                matrix_result[mIndex][nIndex] += matrix_a[mIndex][j] * matrix_b[j][nIndex];
            }

        }
    }
    //print matrix_result
    for(mIndex = 0; mIndex < m; mIndex ++){
        for(nIndex = 0; nIndex < m; nIndex ++){
            printf("%d", matrix_result[mIndex][nIndex]);
            if(nIndex == m - 1 && mIndex != m - 1){
                printf("\n");
            }else if(mIndex != m ){
                printf(" ");
            }

        }
    }
    return 0;
}
