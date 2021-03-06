#include <stdio.h>
#include <string.h>

int main() 
{
    char str[500], fs[33];
    int arr[32];
	int bits[32];
    int i;
    //initialize
    memset(arr, 0, sizeof(arr));
    memset(fs, '\0', sizeof(fs));
    //input
    scanf("%s", str);
    //hash
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == '\n') {
            break;
	}
        arr[(i + 1) % 32] += str[i];
    }
    for (i = 0; i < 32; i++) {
        bits[i] = arr[31 - i] ^ (arr[i] << 1);
        fs[i] = (char) (bits[i] % 85 + 34);
    }
    //output
    printf("%s", fs);

    return 0;
}
