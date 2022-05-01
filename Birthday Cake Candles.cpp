#include<stdio.h>
#include<map>
using namespace std;
#define SIZE 100000
int main()
{
    map< int, int> mm;
    int n, temp, max = -1;;
    scanf("%d", &n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &temp);
        if (temp > max)
        {
            max = temp;
        }
        mm[temp]++;
    }
    printf("%d\n", mm[max]);


    return 0;
}
