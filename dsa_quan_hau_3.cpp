#include<bits/stdc++.h>
using namespace std;
using namespace std;

int n , cot[20] , cheoc[20] , cheop [20] , a[20];
char res[20][20];

void in()
{
	for(int i = 1 ; i<= n ; i++)
	{
		for(int j = 1 ; j<= n ; j++)
		{
			cout << res[i][j] ;
		}
		cout << endl;
	}
}

void Try(int i)
{
	for(int j = 1 ; j<= n ; j++)
	{
		if(cot[j] == 0 && cheoc[i-j+n] == 0 && cheop[i+j-1] == 0)
		{
			a[i] = j;
			cot[j] = 1; 
			cheoc[i-j+n] = 1;
			cheop[i+j-1] = 1;
			if(i == n)
			{
				for(int k = 1 ; k <= n ; k++)
				{
					res[i][a[i]] = 'Q';
				}
				in();
				memset(res , '.' , sizeof(res));
				cout << endl;
			}
			else
			{
				Try(i+1);
			}
			cot[j] = 1; 
			cheoc[i-j+n] = 1;
			cheop[i+j-1] = 1;
		}
	}
}
int main()
{
	cin >> n;
	memset(cot,0,sizeof(cot));
	memset(cheop,0,sizeof(cheop));
	memset(cheoc,0,sizeof(cheoc));
	memset(res , '.' , sizeof(res));
	Try(1);
	return 0;
}
