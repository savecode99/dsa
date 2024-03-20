#include<bits/stdc++.h>
using namespace std;

bool check(int a[] , int n , int k , long long tmp)
{
    long long res = 0;
    for(int i = 0 ; i < n ; i++)
    {
        int b = a[i] - tmp;
        if(b)
        {
            res += b;
        }
    }
    return res >= k; 
}
int main()
{
    int n , k ;
    cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    long  long l = 0;
    long long  r = *max_element(a , a + n);
    long long ans = 0;
    while(l <= r)
    {
        long long mid = (l + r) / 2;
        if(check(a , n , k , mid))
        {
            ans = mid ;
            l = mid + 1;
        }
        else 
        {
            r = mid - 1; 
        }
    }
    cout << ans << endl;
}