#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define max 100
int main()
{
    int i,p=1;
    int twin[max];
    int c;
    for(int k=1; k<=max; k++)
    {
        twin[k]=0;
    }
    for(int i=2; i<=sqrt(max); i++)
    {
        if(twin[i]==0)
        {
            for(int j=i+i; j<=max; j+=i)
            {
                twin[j]=1;
            }
        }
    }
    int idx=1;
    int ary[max];
    for(int i=2; i<max-2; i++)
    {
        if((twin[i]==0)&&(twin[i+2]==0))
        {
            ary[idx]=i;
            idx++;
        }

    }
    int input;
    while(cin>>input)
    {

        cout<<"("<<ary[input]<<", "<<ary[input]+2<< ")"<<endl;
    }
    return 0;
}






