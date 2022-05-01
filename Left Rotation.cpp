#include<stdio.h>
int main()
{
    int n, r;
    int ary[100005];
    scanf("%d%d", &n, &r);
    for (int i = 0; i < n; i++)
        scanf("%d", &ary[i]);
    for (int j = r; j < n; j++)
    {
        printf("%d ", ary[j]);
    }
    for (int j = 0; j < r; j++)
    {
        printf("%d ", ary[j]);
    }
    printf("\n");
    return 0;

}
