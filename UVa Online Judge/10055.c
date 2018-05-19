#include<stdio.h>
int main()
{
    long long int input1,input2,sum;

    while(scanf("%lld %lld",&input1,&input2)!=EOF)
    {

        if(input1>input2)
        {
            sum=input1-input2;
            printf("%lld\n",sum);

        }
       else
        {
            sum=input2-input1;
            printf("%lld\n",sum);

        }
   }
        return 0;
    }

