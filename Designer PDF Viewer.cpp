#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    //freopen("input.txt", "r", stdin);

    int value[256];
    for (char a = 'a'; a <= 'z'; a++)
    {
        scanf("%d", &value[a]);
    }

    char c[11];
    cin >> c;
    int size = 0, max = -1;

    for (int i = 0; c[i] != '\0'; i++)
    {
        size++;
        if (value[c[i]] > max) max = value[c[i]];
    }
    int area;
    area = max * size;
    cout << area << endl;
    return 0;

}
