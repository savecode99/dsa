#include<bits/stdc++.h>
using namespace std;

bool check(int a[] , int n , int k , long long mid )
{
    long long ans = 0;
    for(int i = 0 ; i < n ; i++)
    {
        ans += mid / a[i];
    }
    return ans >= k;
}
int main()
{
    int n , k ;
    cin >> n >> k;
    int a[n];
    for( int &x : a) cin >> x;
    long long  l = 0 ;
    long long r = 1ll * k * (*min_element(a,a+n));
    long long ans = 0;
    while(l <= r)
    {
        long long mid = (l + r) / 2;    
        if(check(a , n , k , mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;

    }
    cout << ans << endl;

    return 0;
}