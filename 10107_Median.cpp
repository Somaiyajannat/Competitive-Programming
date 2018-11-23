#include<bits/stdc++.h>
using namespace std;
int main()
{
    int number,t=0;
    int ary[10001];
    while(scanf("%d",&number)==1)
    {
        t++;
        ary[t]=number;

        if(t==1)
        {
            cout<< number <<endl;
        }
        if(t>1)
        {
            sort(ary+1,ary+(t+1));
            if((t%2)!=0)
            {
                int d= t/2;
                cout<< ary[d+1]<<endl;
            }
            else
            {
                int d=t/2;
                int result=(ary[d]+ary[d+1])/2;
                cout<< result <<endl;
            }
        }
    }
    return 0;
}
