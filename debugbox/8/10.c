#include <stdio.h>
#include <string.h>

int main() 
{
    int n;
    scanf("%d\n", &n);
    int i,j,k;
    char a[100][101];
    char temp[101];

    for (i = 0; i < n; i++) {
        for (j = 0; j < 100; j++) {
            if (scanf("%c", &a[i][j]) == EOF) {
                break;
            }
            if (a[i][j] == '\n') {
                break;
            }
        }
        if (a[i][j] == EOF) {
			break; 
	}
    }
    
    for (i = 0, k = 0; i < n - 1; i++) {
        if (strlen(a[k]) >= strlen(a[i+1])) {
            strcpy(temp, a[k]);
        } else {
            k = i+1;
            strcpy(temp, a[k]);
        }
    }
    printf("%s",temp);

    return 0;
}
