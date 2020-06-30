#include <stdio.h>
#include <string.h>
#include<stdlib.h>

void swap (char b[], char c[]) 
{
    char temp[25];
    strcpy(temp, b);
    strcpy(b, c);
    strcpy(c, temp);
}

int main() 
{
    char name[15][25];
    int i, j;
    int m = 10;
    //input
    for (i = 0; i < m; i++) {
        scanf("%s", name[i]);    
    }
    //sort
    for (j = 0; j < m - 1; j++) {
        for (i = 0; i < m - j - 1; i ++) {
            if (strcmp(name[i], name[i + 1]) > 0) { 
                    swap(name[i], name[i + 1]);    
            }
        }
    }
    //output
    for (i = 0; i < m; i++) {
        printf("%s\n", name[i]);    
    }
    return 0;
}
