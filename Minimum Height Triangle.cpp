#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int main()
{
    long int base;
    long int area;
    cin >> base;
    cin >> area;
    long int height;
    height = ceil((2.00 * area) / base);

    cout << height << endl;
    return 0;
}
