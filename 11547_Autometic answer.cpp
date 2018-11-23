#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase,input,result;
    cin>> testCase;
    int mod;
    for(int i=0; i<testCase; i++)
    {
        cin>> input;
        int r=((((((input*567)/9)+7492)*235)/47)-498);
        if(r < 0)
        {
            result=(-1*r);
        }
        else
            result = r;

        int temp = result;
        cout<< temp<<endl;
        for(int j=0; j<=1; j++)
        {
            int s = temp/10;
            mod = temp%10;
            temp=s;
        }
        cout<< mod <<endl;


    }
    return 0;
}
