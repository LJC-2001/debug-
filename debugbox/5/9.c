#include <stdio.h>
#include <string.h>

int main() 
{
    int i,j;
    char name[10][20]={0};
    char temp[20];
    //intout
    for (i = 0; i < 10; i++) {
        scanf("%s",&name[i]);
    }
    //sort
    for (j = 0; j < 9; j++) {
    	for (i = 0; i < 9; i++) {
            if (strcmp(name[i], name[i+1]) > 0) {
                strcpy(temp, name[i]);
                strcpy(name[i], name[i+1]);
                strcpy(name[i+1], temp);
            }
        }
    }
	//output
    for (i = 0; i < 10; i++) {
        printf("%s\n",name[i]);
    }
    return 0;
}
