#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) 
{
    int i = 0;
    int chmod = 0;
    int chmod_r = 0;
    int chmod_w = 0;
    int chmod_x = 0;
		
    char temp[3];
    char permission[3];	
    //input
    scanf("%s", permission); 			
    //statistic origin right
    for (i = 0; i < 3; i++) {
	if (permission[i] == 'r') {
	    chmod_r++;
	}	
	if (permission[i] == 'w') {
	    chmod_w++;
	}
	if (permission[i] == 'x') {
	    chmod_x++;
	}
    }
    //change right
    while (scanf("%s", permission) != EOF) {	
	if (permission[0] == '+') {
	    if (permission[1] == 'r') {
		chmod_r++;
	    }	
	    if (permission[1] == 'w') {
		chmod_w++;
	    }
	    if (permission[1] == 'x') {
		chmod_x++;
	    }
	}
	if (permission[0] == '-') {
	    if (permission[1] == 'r') {
		chmod_r--;
	    }	
	    if (permission[1] == 'w') {
		chmod_w--;
	    }
	    if (permission[1] == 'x') {
		chmod_x--;
	    }
	}	
    }
	
    chmod = chmod_r * 4 + chmod_w * 2 + chmod_x;
    printf("%d", chmod);
    return 0;
}
