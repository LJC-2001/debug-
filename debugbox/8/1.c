#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    char names[10000][101];
    char max[101];
    for (int i = 0; i < n; i++) {
        //gets(names[i]);
        int z = 0;
        while (scanf("%c", &names[i][z]) != EOF && names[i][z] != '\n') {
            z++;
        }
        names[i][z] = '\0';
    }
    strcpy(max, names[0]);
    for (int i = 0; i < n - 1; i++) {
        if (strlen(names[i]) > strlen(max)) {
                strcpy(max, names[i]);
            }
    }
    
    printf("%s\n", max);
    return 0;
}

