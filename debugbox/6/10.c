#include <stdio.h>

int main() 
{
    char pms[3];
    char change_pms[100][3];
    int i = 0;
    int j;
    int a = 0;   //¿¿¿¿¿¿¿¿
    int b = 0; 
    //¿¿¿¿¿¿¿¿
    scanf("%s", pms);
    //¿¿¿¿¿¿¿¿¿¿¿¿¿
    while (scanf("%s", change_pms[i]) != EOF) {
    	i++;
    }
    j = i;
    //¿¿¿¿¿¿¿¿¿¿¿¿¿¿¿
    for (i = 0; i < strlen(pms); i++) {
        if (pms[i] == 'r') {
            a += 4;
        } else if (pms[i] == 'w') {
            a += 2;
        } else {
            a += 1;
        } 
    }
    
    for (i = 0; i < j; i++) {
        if (change_pms[i][0] == '+') {
            if (change_pms[i][1] == 'r') {
                b += 4;   
            } else if (change_pms[i][1] == 'w') {
                b += 2;
            } else {
                b += 1;
            }
        } else {
            if (change_pms[i][1] == 'r') {
                b -= 4;   
            } else if (change_pms[i][1] == 'w') {
                b -= 2;
            } else {
                b -= 1;
            }
        }
    }
    printf("%d", a + b);
    return 0;
}
