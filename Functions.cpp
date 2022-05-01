#include <iostream>
#include <cstdio>
using namespace std;
int max(int a, int b)
{
    if (a > b) return a;
    else return b;
}

int max_of_four(int a, int b, int c, int d) {
    /*int ary[6];
    ary[0] = a;
    ary[1] = b;
    ary[2] = c;
    ary[3] = d;

    int i;int max =ary[0];
    for(i=1; i<=3; i++)
    {
        if(max < ary[i] ){
            max = ary[i];
        }
    }
    return max;*/

    return max(max(a, b), max(c, d));

}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}
