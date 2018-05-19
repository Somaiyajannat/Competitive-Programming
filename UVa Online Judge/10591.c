#include<stdio.h>
int digit(int value)
{
    int i,j,temp,p,q,r,original ,count=0;
    int array[1000];
    for(i=0; i<1000 ; i++)
    {
        array[i]=0;

    }

    original=temp=value;
    array[temp]=1;
    while(temp!=0)
    {
        p=temp%10;
        p=(p*p);
        q=(temp/10);
        count= count+p;
        temp=q;

    }

    if(count==1)
        return 1;

    if(count!= 1 )
        temp=count;



    if(count == original && array[temp]==1)
        return 0;

}

int main()
{

    int i,testCase,input,tv;
    scanf("%d",&testCase);
    printf("testcase %d\n ",testCase);
    int n=1;
    while(testCase>0)
    {
        scanf("%d",&input);
        printf("input %d\n",input);
        tv=digit(input);

        if(tv==1)
        {
            printf("Case #%d: %d is a Happy number\n",n,input);
        }
        else if(tv==0)
        {
            printf("Case #%d: %d is an Unhappy number\n",n,input);

        }
        n++;
        testCase--;
    }
}








