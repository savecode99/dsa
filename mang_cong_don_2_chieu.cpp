#include<bits/stdc++.h>
using namespace std ;
void nhap(int (&a)[105][105] , int m , int n);
void in(long long (&a)[105][105] , int m , int n);
void solve(int (&a)[105][105] , long long (&b)[105][105] , int m , int n)
{
	b[0][0] = a[0][0];
	for(int i = 1 ; i < n ; i++)
	{
		b[0][i]=a[0][i] + b[0][i-1];
	}
	for(int i = 1 ; i < m ; i++)
	{
		b[i][0]=a[i][0] + b[i-1][0];
	}
	for( int i = 1 ; i < m ; i++)
	{
		for(int j = 1 ; j < n ; j++)
		{
			b[i][j] = b[i-1][j] + b[i][j-1] - b[i-1][j-1] + a[i][j];
		}
	}
}
main()
{
	int n , m;
	cin >> m >> n;
	int A[105][105];
	nhap(A , m , n);
	long long prefix[105][105];
	// xu li mang
	solve(A , prefix , m , n);
	// in mang cong don
	//in(prefix , m , n);
	int t ;
	cin >> t;
	while(t--)
	{
	
	int x1 , x2 , y1 , y2;
	
	cin >> x1 >> x2 >> y1 >> y2;
	// x y theo stt tren ma tran
	long long res = prefix[x2-1][y2-1] + prefix[x1-2][y1-2] - prefix[x1-2][y2-1] - prefix[x2-1][y1-2];
	cout << res << endl;
	}
}
void nhap(int (&a)[105][105] , int m , int n)
{
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cin >> a[i][j];
		}
	}
}
void in(long long (&a)[105][105] , int m , int n)
{
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
