#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9+7;
ll a[20][20] , b[20][20];
int n;

void nhap()
{
    for(int i = 0 ; i< n ; i++)
    {
        for( int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
}

void nhan_ma_tran(ll x[20][20] , ll y[20][20])
{
    ll res[20][20];
    memset(res , 0 , sizeof(res));
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            for(int k = 0 ; k < n ; k++)
            {
                res[i][j] += ((x[i][k] % mod) * (y[k][j] % mod)) % mod;
                res[i][j] %= mod;
            }
        }
    }
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            x[i][j] = res[i][j];
        }
    }
}

void powMod( ll x[20][20] , int m)
{
    if(m <= 1) return ;
    powMod(x,m/2);
    nhan_ma_tran(x, x);
    if(m % 2 == 1) nhan_ma_tran(x,b);
}
void in()
{
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m;
        cin >> n;
        nhap();
        cin >> m;
        powMod(a,m);
        in();
    }
    return 0;
}