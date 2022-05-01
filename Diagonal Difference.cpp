#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    int j;
    int num;
    scanf("%d", &num);
    int ary[num][num];
    for (i = 0; i < num; i++)
    {
        for (j = 0; j < num; j++)
        {
            scanf("%d", &ary[i][j]);
        }
    }
    int sum1 = 0, sum2 = 0;

    for (i = 0, j = 0; i < num; i++, j++)
    {
        sum1 = sum1 + ary[i][j];
    }
    for (i = 0, j = num - 1; i < num; i++, j--)
    {
        sum2 = sum2 + ary[i][j];
    }
    int value = sum1 - sum2;
    if (value <= -1)
    {
        value = -value;
    }
    printf("%d\n", value);

    //printf("%d\n",sum2);
    return 0;
}
