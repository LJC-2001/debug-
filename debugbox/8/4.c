#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d\n", &n);
    char name[10000][101];
    char temp[101];
    

    for(int i = 0; i < n; i++){
        fgets(name[i], 101, stdin);        
    }
 
    for (int j = 0; j < n; j++){
        for (int k = 0; k < n - j - 1; k++){
            if((strlen(name[k]) < strlen(name[k + 1]))){
                strcpy(temp, name[k]);
                strcpy(name[k], name[k + 1]);
                strcpy(name[k + 1], temp);
            }
        }
    }
    printf("%s\n", name[0]);
    return 0;
}
