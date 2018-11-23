#include<stdio.h>
int main()
{
    int i=0,j,k,test;
    double f,c,d,a;
    scanf("%d",&test);
    for(k=1; k<=test ; k++)
    {
        scanf("%lf%lf",&c,&d);
        f=((9*c)/5)+d;
        a=(f*5)/9;
        printf("Case %d: %.2lf\n",k,a);
    }



return 0;
}



