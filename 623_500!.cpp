#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int input;
    if(input>=1000)
    {
        while(scanf("%lld",&input)==1)
        {
            printf("%lld!\n",input);
            long long int value,save=1;
            value=input;
            for(int i=1; i<=input; i++)
            {
                save=i*save;
            }
            cout<<save<<endl;
        }

    }

    return 0;

}
