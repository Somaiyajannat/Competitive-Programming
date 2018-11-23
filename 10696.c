#include<stdio.h>


int main()
{
    int i,input,temp;
    while(scanf("%d",&input)==1)
    {
        if(input==0)
        {
            break;
        }
        else

            temp=input;
        if(temp>=101)
        {

            printf("f91(%d) = %d\n",temp,temp-10);

        }
        if(temp <=100)
        {
            printf("f91(%d) = %d\n",temp,91);
        }
    }
    return 0;

}
