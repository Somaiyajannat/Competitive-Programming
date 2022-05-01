#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int ary[1000];
    int num;
    cin >> num;
    int i, input;
    for (i = 0; i < num; i++)
    {
        cin >> input;
        ary[i] = input;
    }
    for (i = num - 1; i >= 0; i--)
    {

        cout << ary[i] << " ";
    }
    cout << endl;
    return 0;
}
