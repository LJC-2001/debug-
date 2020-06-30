#include <stdio.h>
#include <string.h>

int main() 
{
    char names[10][21];
    char temp[21];
    int i, j;
    //input
    for (i = 0; i < 10; i++) {
        scanf("%s", names[i]);
    }
    //sort
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 10 - i - 1; j++) {
            if (strcmp(names[j], names[j+ 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }
    //output
    for (i = 0; i < 10; i++) {
        printf("%s\n", names[i]);
    }
    return 0;
}
