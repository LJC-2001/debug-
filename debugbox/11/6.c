#include <stdio.h>
#include <string.h>

int main() 
{
    int arr[32];
    int bits[32];
    char result[32];
    int i, j = 1;
    int b;
    char input;
    //initialize
    for(i = 0; i < 32; i++){
        arr[i] = 0;
    }
    //input
    while (scanf("%c", &input) != EOF) {
        if (input == '\n') {
            break;
        } 
        arr[j % 32] = arr[j % 32] + (int)(input);
        j++;
    }
   //hash
    for (i = 0; i < 32; i++) {
        bits[i] = (arr[31 - i]) ^ (arr[i] << 1);
        b = (bits[i] % 85) + 34;
        result[i] = (char)b;
    }
    //output
    for (i = 0; i < 32; i++) {
        printf("%c", result[i]);
    }
    return 0;
}
