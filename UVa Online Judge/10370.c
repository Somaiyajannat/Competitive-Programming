#include<stdio.h>
int main()
{
    int i,j,testCase,num,count;
    float result,sum,avg;
    int array[1020];
    scanf("%d",&testCase);
    for(i=0; i<testCase ; i++)
    {
        sum=0;
        scanf("%d",&num);
        for(j=0 ; j<num ; j++)
        {
            scanf("%d",&array[j]);
            sum=sum+array[j];
        }
        avg =(sum/num);
        count=0;
        for(j=0; j<num ; j++)
        {
            if(array[j]>avg)
            {
                count++;
            }
        }
        result=(float)count / (float)num;
        printf("%.3f%%\n",(100*result));


    }
    return 0;

}
