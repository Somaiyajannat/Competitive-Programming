#include<stdio.h>
int main()
{
    int i,j,k,input,count,num,temp;
    int array[10000];
    while(scanf("%d",&num)==1)
    {
        for(i=0; i<num ; i++)
        {
            scanf("%d",&array[i]);

        }

        count=0;
            for(j=0; j< num-1 ; j++)
            {
                for(k=0; k< num-1 ; k++)
                {
                    if(array[k] > array[k+1])
                    {
                        temp=array[k];
                        array[k]=array[k+1];
                        array[k+1]=temp;
                        count++;


                    }

                }
            }

            printf("Minimum exchange operations : %d\n",count);
        }



    }
