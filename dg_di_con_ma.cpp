#include<bits/stdc++.h>
using namespace std;
//duong di con ma

int dx[8]={-1 , -2 , -2 , -1 , 1 , 2 ,  2 , 1};
int dy[8]={-2 , -1 ,  1 ,  2 , 2 , 1 , -1 ,-2};
int a[101][101] ;
int m , n , s , t , u , v;

void nhap()
{
	cin >> m >> n >> s >> t >> u >> v;
	s-- , t-- , u-- , v--;
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cin >> a[i][j];
		}
	}
}

void loang(int i , int j )
{
	a[i][j] = 0;
	for(int k = 0 ; k < 8 ; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < m && j1 >= 0 && j1 < n && a[i1][j1])
		{
			loang(i1,j1);
		}
	}
}
int main()
{
	nhap();
		
	loang(s , t);
	if(a[u][v] == 0) cout << "YES" << endl;
	else cout << "NO" << endl; 
	return 0;

}
