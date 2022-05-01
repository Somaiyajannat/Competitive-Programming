#include <iostream>
#include<stdio.h>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long int aa;
    char c;
    float f;
    double d;
    cin >> a >> aa >> c >> f >> d;
    cout << a << endl;
    cout << aa << endl;
    cout << c << endl;
    printf("%0.3f\n", f);
    printf("%0.5lf\n", d);

    return 0;
}
