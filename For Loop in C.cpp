#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d)
{
    int max = -1;
    int i;
    int ary[5]; ary[0] = a; ary[1] = b; ary[2] = c; ary[3] = d;

    for (i = 0; i < 4; i++)
    {
        if (ary[i] >= max)
        {
            max = ary[i];
        }
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
