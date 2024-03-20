#include<bits/stdc++.h>
using namespace std;
int n;
int a[100] , check[100];
void in()
{
	for(int i = 1 ; i <= n ;  i++)
	{
		cout << a[i];
	}
	cout << endl;
}

void Try(int i)
{
	for(int j = 1 ; j <= n ; j++)
	{
		if(check[j] == 0)
		{
			a[i] = j;
			check[j] = 1;
			if( i == n)
			{
				in();
			}else
			{
				Try(i+1);
			}
			check[j] = 0;
		}
		
		
	}
}

int main()
{
	cin >> n;
	memset(check , 0 , sizeof(check));
	Try(1);
	return 0;
}
