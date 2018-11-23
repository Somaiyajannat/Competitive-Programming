#include<bits/stdc++.h>
using namespace std;
int main()
{
    freopen("in.txt","r",stdin);
    int number,sum=0;
    int ary[101],t;
    int l=0;
    int avg=0;
    int cou=0;
    int result;
    while(scanf("%d",&number)==1)
    {
        result=0;
        l++;
        t=0;
        int sum=0;
        if(number==0)
        {
            break;
        }
        else
        {
            while(number>0)
            {
                t++;
                cin>>ary[t];
                sum=sum+ary[t];
                number--;
            }
            avg=sum/t;
            cou=0;

            for(int i=1; i<=t; i++)
            {
                if(ary[i]>avg)
                {
                    cou=ary[i]-avg;
                    result=result+cou;
                }
            }

        }
        cout<<"Set #"<<l<<endl;
        cout<<"The minimum number of moves is "<< result<<endl;
        cout<<endl;

    }
    return 0;
}
