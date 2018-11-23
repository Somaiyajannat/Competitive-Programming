#include<stdio.h>
/*int prime(int value){
    int l,sum,count;
    for(l=2; l<value;l++){
        if(value%l==0)
         return 0;
         else
         return 1;
    }
}*/
int main()
{
    int i ,j,k;
    long long int input;
    int array[10000];

    while(1)
    {
        scanf("%lld",&input);
        j=0;
        if(input==0)
        {
            break;
            else if(input !=0)
            {

                for(i=2; i<input; i++)
                {
                    (input)


                }
                else if((input%i)==0)
                {
                    array[j]=i;
                    j++;
                    printf("array %d",array[j]);
                }
            }

        }
    }
