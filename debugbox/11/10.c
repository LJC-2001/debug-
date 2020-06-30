#include <stdio.h>
#include<string.h>

int main() 
{
    int i, j, k;
    int arr[32] = {0};
    int bits[32];
    char str[500], rstr[32];
    i = 0;
    //input
    scanf("%s", str);
    k = strlen(str);
    //hash
    for (i = 0; i < k; i++) {
        arr[(i + 1) % 32] += (int)str[i];
    }
    for (j = 0; j < 32; j++) {
        bits[j] = arr[31 - j] ^ (arr[j] << 1);
        rstr[j] = (char)(bits[j] % 85 + 34);
    }
    //output
    for (i = 0; i < 32; i++) {
        printf("%c", rstr[i]);
    }
    return 0;
}
