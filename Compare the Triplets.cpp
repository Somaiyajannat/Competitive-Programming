#include<stdio.h>
int main()
{
    int a[3];
    int b[3];
    int i,j,k;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for( i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    j=k=0;
    for(i=0;i<3;i++)
    {
    
        if(a[i]>b[i])
        {
            k++;
            
        }
        else if(a[i]<b[i])
        {
            j++;
            
        }
        
    }
    printf("%d %d\n",k,j);

}
