#include<stdio.h>
int main()
{
    long long int arr[6];
    int i;
    for (int i = 0; i < 5; i++)
    {
        scanf("%lld", &arr[i]);
    }
    int j, temp;
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 5 - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;

            }
        }
    }
    int min = 0; int max = 0;
    for (i = 0; i < 4; i++)
    {
        min = min + arr[i];
    }
    for (i = 1; i < 5; i++)
    {

        max = max + arr[i];

    }

    printf("%lld %lld\n", min, max);

}
