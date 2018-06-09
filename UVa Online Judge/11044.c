#include<stdio.h>
int main(){
    int i,test,row,colum,result;
    scanf("%d",&test);
    while(test>0){
        scanf("%d %d",&row,&colum);
        result=((row/3)*(colum/3));
        printf("%d\n",result);
        test--;
    }


}
