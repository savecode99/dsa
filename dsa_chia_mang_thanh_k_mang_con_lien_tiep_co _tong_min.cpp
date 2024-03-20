#include<bits/stdc++.h>
using namespace std;

bool check(int a[] , int n , int k , long long mid)
{
    
    long long count = 0;
    long long sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        sum += a[i];
        if(sum > mid)
        {
            count++;
            sum = a[i];
        }
    }
    count++;
    return count <= k;
}

int main()
{
    int n , m ;
    cin >> n >> m;
    int a[n];
    long long  right = 0;
    for(int &x : a) 
    {
        cin >> x;
        right += x;
    }
    long long left = *min_element(a , a+n);
    long long ans = 0;
    while(left <= right)
    {
        long long  mid = (left + right) / 2;
        if(check(a,n,m,mid))
        {
            ans = mid ;
            right = mid - 1; 
        }
        else left = mid + 1;
    }
    cout << ans << endl;
    return 0;
}