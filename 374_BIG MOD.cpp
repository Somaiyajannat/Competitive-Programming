#include<iostream>

using namespace std;

#define ll          long long int

int BIGMOD(int base ,int pow, int mod)
{
    ///base case

    if(pow == 0){
        return 1;
    }

    if(pow == 1) {
        return base%mod;
    }

    ll x;
    x = BIGMOD(base, pow/2, mod);
    x = (x%mod)*(x%mod);

    if(pow%2 == 1){
        x = (x%mod)*(base%mod);
    }
    return x % mod;

}


int main()
{

    //freopen("in.txt","r",stdin);

    int b, p, M, value;
    while(cin >> b >> p >> M)
    {
        value = BIGMOD(b, p, M);
        cout << value << endl;
    }
    return 0;
}
