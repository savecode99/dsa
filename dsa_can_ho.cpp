#include<bits/stdc++.h>
using namespace std;

int main()
{
	int m , n , k;
	cin >> m >> n >> k;
	int a[m], b[n];
	for(int &x:a) cin >> x;
	for(int &x:b) cin >> x;
	sort(a,a+m);
	sort(b,b+n);
	int l1 = 0 , l2 = 0;
	int count = 0;
	while(l1 < m && l2 < n)
	{
		if(abs(a[l1] - b[l2]) <= k)
		{
			l1++;
			l2++;
			count++;
		}
		else if(a[l1] > b[l2])
		{
			l2++;
		}
		else 
		{
			l1++;
		}
	}
	cout << count << endl;
	return 0;
}
