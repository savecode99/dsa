#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
long long a[2][2] , b[2][2];
// nmhan ma tran
void multi(long long x[2][2] ,long long y[2][2])
{
    long long res[2][2];
    memset(res , 0 , sizeof(res));
    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j <2 ; j++)
        {
            for(int k = 0 ; k < 2 ; k++)
            {
               res[i][j] += ((x[i][k] % mod) * (y[k][j] % mod)) % mod;
               res[i][j] %= mod;  
            }
        }
    }
    for(int i = 0 ; i < 2 ; i++)
    {
        for(int j = 0 ; j < 2 ; j++)
        {
            a[i][j] = res[i][j];
        }
    }
}
// 
void powmod( long long m[2][2] , int n)
{
    
    if(n <= 1) return;
    powmod(m,n/2);
    multi(m,m);
    if(n % 2 == 1) multi(m,b);
}

int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        a[0][0] = 1 , a[1][0] = 1 , a[0][1] = 1 , a[1][1] = 0;
        b[0][0] = 1 , b[1][0] = 1 , b[0][1] = 1 , b[1][1] = 0;
        int n;
        cin >> n;
        powmod(a,n);
        // for(int i = 0 ; i < 2 ; i++)
        // {
        //     for(int j = 0 ; j < 2 ; j++)
        //     {
        //         cout << a[i][j] << " " ;
        //     }
        //     cout << endl;
        // }
        cout << a[1][0] << endl;
    }
}