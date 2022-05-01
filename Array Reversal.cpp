#include<stdio.h>
int main()
{
    int num;
    int ary[1001];
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &ary[i]);
    }
    for (int j = num - 1; j >= 0; j--)
    {
        printf("%d ", ary[j]);
    }
    return 0;


}
