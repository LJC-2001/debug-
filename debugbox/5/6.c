#include <stdio.h>
#include <string.h>
int main() 
{
    int i, k;
    char n[10][21], m[21];
    //input
    for (i = 0; i < 10; i++) {
    	scanf("%s",&n[i]);
	} 
	//sort     
    for (i = 0; i < 9; i++) {
        for (k = i + 1; k < 10; k++) {    
            if(strcmp(n[i], n[k]) > 0) {
                strcpy(m, n[i]);
                strcpy(n[i], n[k]);
      			strcpy(n[k], m);
            }
        }   
    }
    //output
    for (i = 0; i < 10; i++) {
    	printf("%s\n",n[i]); 
	}
    return 0;
}
