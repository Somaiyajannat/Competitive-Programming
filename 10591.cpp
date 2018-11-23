#include<stdio.h>


int digit(int value)
{
    int temp=value;
    printf("inputs %d\n",value);
    int i,j,p,q,r,original ,count=0;
    int array[1000];

    for(i=0; i<1000 ; i++)
    {
        array[i]=0;

    }
    int result = 0;
    original=temp=value;
    //array[temp]=1;
    for( ; 1; )
    {
        count=0;
        while(temp!=0)
        {
            p=temp%10;
            p=(p*p);
            q=(temp/10);
            count= count+p;
            temp=q;

        }
        //array[count]=1;
        //printf("Sum %d\n",count);
        //scanf("%d", &result);
        if(count==1){
            //result = 1;
            return 1;
        }

        else if(count == original || array[temp]==1){
            //result = 1;
            return 0;
        }


        if(count!= 1 && count !=original ){
            temp=count;
            array[count]=1;
        }

    }


}

int main()
{

    int i,testCase,input,tv;
    scanf("%d",&testCase);
    int n=1;
    while(testCase>0)
    {
        scanf("%d",&input);
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








