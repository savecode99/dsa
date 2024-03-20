#include<bits/stdc++.h>
using namespace std;
int n;
int a[20] , cheoc[50] , cheop[50] , cot[50];
int cnt = 0;
void Try(int i)
{
	for(int j = 1 ; j <= n ; j++)
	{
		if(cot[j] == 0 && cheoc[i - j + n] == 0 && cheop[i+j-1] == 0)
		{
			a[i] = j;
			cot[j] = 1;
			cheoc[i - j + n] = 1 ;
			cheop[i+j-1] = 1;
			if(i == n)
			{
				cnt++;
			}
			else
			{
				Try(i+1);
			}
			cot[j] = 0 ;
			cheoc[i - j + n] = 0 ;
			cheop[i+j-1] = 0;
		}
		
	}
}
int main()
{
	cin >> n;
	memset(cheoc , 0 , sizeof(cheoc));
	memset(cheop , 0 , sizeof(cheop));
	memset(cot , 0 , sizeof(cot));
	Try(1);
	cout << cnt << endl;
	return 0;
}
