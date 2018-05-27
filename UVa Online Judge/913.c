#include<stdio.h>
int main(){
    int i,j,k;
    long long int input,sum,output,odd;
    while(scanf("%lld",&input)==1){
        odd=(input*(input+2))/2;
        sum=(3*odd)-6;
        printf("%lld\n",sum);
   }
}


