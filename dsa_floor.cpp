#include<bits/stdc++.h>
using namespace std;

void search( int a[], int l , int r , int so)
{
	int res = -2;
	while(l <= r)
	{
		int m = (l + r) / 2;
		if(a[m] <= so)
		{
			l = m ;
			res = m;
		}
		else r = m - 1;
	}
	cout << res+1 << endl;
}

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n , m ;
		cin >> n >> m;
		int a[n];
		for(int &x : a) cin >> x;
		sort(a , a+n);
		search(a , 0 , n-1 , m);
	}
	return 0;
}
