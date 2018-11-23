#include<stdio.h>
int main()
{
    int i,j,testCase,input,temp,sum,p,q,r=1,result;
     int m;
    int array[1000];
    for(j=0 ; j<1000; j++)
    {
        array[j]=0;

    }
    scanf("%d",&testCase);
    for(i=1 ; i<=testCase ; i++)
    {
        result=0;
        scanf("%d",&input);

        for(m=0;m<1000;m++){
            array[m]=0;

        }
        temp=input;
        while(result==0)
        {
            sum=0;
            while(temp>0)
            {
                p=temp%10;
                sum=sum+p*p;
                temp=temp/10;

            }
            if(sum==1)
           {
             printf("Case #%d: %d is a Happy number.\n",i,input);
             result=1;

            }
            else if((sum == input || array[sum]==1 ) && result==0)
            {
                printf("Case #%d: %d is an Unhappy number.\n",i,input);
                result=1;
                r++;
            }
            else if(sum!=1 && sum!=input)
            {
                temp=sum;
                array[sum]=1;
            }


            }
        }

    }


