#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int value,c;
    while(cin>> value){
            c=0;
        int i;
        for(int i=2;i<=sqrt(value);i++){
            if((value%i)==0){
                c++;
            }
        }
        if(c==0){
            cout<< value<<" is prime"<<endl;
        }
        else
        {

            cout<<value<<" is not prime"<<endl;
        }
    }
}
