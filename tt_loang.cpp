#include<bits/stdc++.h>
using namespace std;
int a[101][101], m , n;
// loang
int dx[4]={-1 , 0 , 1 , 0};
int dy[4]={0 , 1 , 0 , -1};
void loang(int i , int j)
{
	a[i][j] = 0 ;
	// danh dau ?? ham main se kiem tra danh dau
	for(int k = 0 ; k < 4 ; k++)
	{
		int i1 = i + dx[k];
		int j1 = j + dy[k];
		if(i1 >= 0 && i1 < m && j1 >= 0 && j1 < n && a[i1][j1])
		{
			loang(i1 , j1);
		}
	}
}
main()
{
	int dem = 0;
	cin >> m >> n;
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			cin >> a[i][j];
		}
	}
	// duyet tat ca ptu ma tran
	for(int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < n ; j++)
		{
			if(a[i][j] == 1)
			{
				dem++;
				loang(i,j);
			}
		}
	}
	cout << dem << endl;
}
