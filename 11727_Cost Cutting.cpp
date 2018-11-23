#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test ;
    cin >> test;
    int salary[3];
    while(test>0){
        for(int i=0;i<3;i++){
            cin>>salary[i];

        }
        sort(salary+0,salary+2);
        for(int i=0 ;i<3;i++){
            cout<<salary[i]<<" ";
        }
        cout<<endl;
        test--;
    }
    return 0;
}
