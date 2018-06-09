#include<stdio.h>
int main(){
    int i,j,count;
    char line[10000],name;
    while(gets(line)){
            count=0;
        for(i=0;line[i]!='\0'; i++){
            if(
            ((line[i]>='a' && line[i]<='z')||(line[i]>='A'  && line[i+1]<='Z') ) &&
                ((line[i+1]<'a' || line[i+1]>'z')&&(line[i+1]<'A' ||line[i+1]>'Z'))
               )
               count++;
        }
    printf("%d\n",count);
    }



}
