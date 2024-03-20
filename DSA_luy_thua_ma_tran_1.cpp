#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007;
using ll = long long;
int n,k;
long long a[10][10], b[10][10];
void mul(ll x[10][10], ll y[10][10])
{
    ll tmp[10][10];
    for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            ll res = 0;
            for(int k = 0 ; k < n ; k++)
            {
                res = res + (x[i][k] * y[k][j]);
                res %= mod;
             
            }
            tmp[i][j] = res;
        }
    }
    
	for(int i = 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            a[i][j]=tmp[i][j];
        }
 	}
}
void pow(ll a[10][10],int k)
{
    if(k<=1) return;
    pow(a,k/2);
    mul(a,a);
    if(k%2==1) mul(a,b);
}

void solve()
{
    
    cin >> n >> k;
    for(int i= 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
            cin >> a[i][j];
            b[i][j]=a[i][j];
        }
    }
    pow(a,k);
    //in ma tran
//    for(int i = 0 ; i < n ; i++)
//    {
//        for(int j = 0 ; j < n ; j++)
//        {
//            cout << a[i][j] << " ";
//        }
//        cout << endl;
//    }
	ll res = 0;
	for(int i= 0 ; i < n ; i++)
    {
        for(int j = 0 ; j < n ; j++)
        {
    		if(i == j) res = (res + a[i][j]) % mod;		    	
		}
	}
	cout << res << endl;
}
main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}
