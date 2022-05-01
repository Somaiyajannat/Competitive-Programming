#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char cstring[10001];
    fgets(cstring, 10001, stdin);
    int length;
    length = strlen(cstring);
    int ary[100];
    for (int i = 0; i < 100; i++)
    {
        ary[i] = 0;
    }
    for (int j = 0; j < length; j++)
    {
        if (cstring[j] >= '0' && cstring[j] <= '9')
        {
            ary[cstring[j]]++;

        }
    }
    for (int i = '0'; i <= '9'; i++)
    {
        printf("%d ", ary[i]);
    }
    printf("\n");
    return 0;
}
