#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t ;
	while(t--)
	{
		int sum ;
		cin >> sum;
		int so4 , so7;
		int check = -1;
		for(int i = sum / 7 ; i >= 0 ; i-- )
		{
			if((sum - i*7) % 4 == 0) 
			{
				so4 = (sum - i*7) / 4;
				so7 = i;
				check = 1;
				break;
			}
		}
		if(check == 1)
		{
			for(int i = 0 ; i < so4 ; i++)
			{
				cout << 4 ;
			}
			for(int i = 0 ; i< so7 ; i++)
			{
				cout << 7 ;
			}
		}
		else cout << -1 ;
		cout << endl;
	}
	return 0;
}
