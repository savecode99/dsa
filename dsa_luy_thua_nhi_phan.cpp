#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
ll m , n;

ll power(ll x , ll y)
{
    if(y == 0) return 1;
    else if( y == 1) return x;
    ll z = (x%mod)*(x % mod) % mod;
 
    if(y % 2 == 1) return   x * (power(z,y/2) % mod);
    else return    power(z,y/2) % mod;
}


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> m >>  n;
        ll res = power(m , n);
        cout << res << endl;
    }
    return 0;
}