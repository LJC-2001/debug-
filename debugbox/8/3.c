#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d\n", &n);
    size_t max = 0;
    size_t current;
    char maxName[200];
    char name[200];
    for (int i = 0; i < n; ++i) {
        int t = 0;
        while (1) {
            if (scanf("%c", &name[t]) == EOF || name[t] == '\n') {
                break;
            } else {
                t++;
            }
        }
        name[t] = '\0';
        current = strlen(name);
        if (current > max) {
           max = current;
           strcpy(maxName, name);
        }
    }
    printf("%s", maxName);
    return 0;
}
