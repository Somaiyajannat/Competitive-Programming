#include<bits/stdc++.h>
using namespace std ;

#define MAXA   20000000
#define MAXT   110000
int twinPrime[MAXT];

void cal()
{
    int twinPrime[MAXT];
    int ary[MAXA];
    for(int i=0; i<= MAXA ; i++)
    {
        ary[i]=0;
    }
    for(int j=2; j<=sqrt(MAXA); j++)
    {
        if(ary[j]==0)
        {
            for(int k=j+j; k<MAXA ; k++)
            {
                ary[k]=1;
            }
        }
    }

    int idx=1;
    for(int k=2; k< MAXA-2; k++)
    {
        if((ary[k]== 0)&&(ary[k+2] ==0))
        {
            twinPrime[idx]=k;
            idx++;
        }
    }

}
int main()
{
    cal();
     int value;
    while(cin>> value)
    {
        printf("(%d, %d)\n",twinPrime[value],twinPrime[value]+2);

    }


    return 0;
}
