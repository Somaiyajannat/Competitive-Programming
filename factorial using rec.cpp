#include<bits/stdc++.h>
using namespace std;
int rec(int r)
{
    if(r==1){
        return 1;
    }
    else
        return r*rec(r-1);
}
int main()
{
    for(int i=1; i<=10; i++)
    {
        int value=i;

        cout<< "Factorial of "<< i << ":"<< rec(value) <<endl;
    }
    return 0;
}
