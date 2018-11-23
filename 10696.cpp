#include<bits/stdc++.h>
using namespace std ;
int boro(int value)
{
    int r=value-10;
    return r;
}
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
            int check=boro(temp);
            printf("f91(%d) = %d\n",temp,check);

        }
        if(temp <=100)
        {
            printf("f91(%d) = %d\n",temp,91);
        }
    }
    return 0;

}
