#include <bits/stdc++.h>
using namespace std;

int main() 
{
    map<int, int> mp;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) 
	{
        int a, b;
        cin >> a;
        mp.insert({a, 1}); 
        cin >> b;
        mp.insert({b, -1}); 
    }
    int res = 0;
    int ans = 0;
    for (auto x : mp) 
	{
		ans += x.second;
		res = max(res,ans);
    }
    cout << res << endl;
    return 0;
}

