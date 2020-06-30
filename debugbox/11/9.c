#include <stdio.h>
#include<string.h>

int main() 
{
    char in[500];
    char out[33];
    char oneC;
    int oneInt;
    int k;
    int arr[32];
    int bits[32];
    int i, j;
    
    scanf("%s", in);
    k = strlen(in);
    
    // initialize
    for (i = 0; i < 32; i++) {
        arr[i] = 0;
    }
    // hash
    for (i = 1; i <= k; i++) {
        oneC = in[i - 1];
        oneInt = oneC;
        arr[i % 32] += oneInt;
    }
    for (j = 0; j < 32; j++) {
        oneInt = arr[31 - j] ^ (arr[j] << 1);
        bits[j] = oneInt;
    }
    for (j = 0; j < 32; j++) {
        oneInt = (bits[j] % 85 + 34);
        oneC = oneInt;
        out[j] = oneC;
    }
    out[32] = '\0';
    //output
    printf("%s", out);
        
    return 0;
}
