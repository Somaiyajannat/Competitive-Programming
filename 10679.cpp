#include<bits/stdc++.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int testCase;
    cin >> testCase;
    for(int i=0; i<testCase; i++)
    {
        string str;
        cin >> str;
        int query;
        cin >> query;

        for(int j=0; j<query; j++)
        {
            string s1;
            cin >> s1;
            int c=0;
            int flage=0;
            int s1length = s1.size();
            for(int k=0; k < str.size() ; k++)
            {
                if(str[k]== s1[0])
                {
                    int y = k;
                    for(int u = 1; u < s1length ; u++)
                    {
                        if(s1[u] == str[y+1])
                        {
                            c++;
                        }
                        else
                            break;
                    }
                    if(c == s1length-1)
                    {
                        cout<< "y"<<endl;
                        c=0;
                        flage =1;
                        break;
                    }
                }


            }
            if(flage =0)
            {
                cout<<"n"<<endl;
                c=0;
                break;
            }


        }

    }

    return 0;


}

