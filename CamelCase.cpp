
#include<stdio.h>


int main()
{
    char s[100000];
    fgets(s, 100000, stdin);
    int i = 0, cou = 0;
    while (s[i] != '\0')
    {

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            cou++;
        }
        i++;
    }

    printf("%d\n", cou + 1);
    return 0;

}
