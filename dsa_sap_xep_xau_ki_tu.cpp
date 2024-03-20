#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int l = s.size();
        map<char,int> mp;
        for(int i = 0 ; i < l ; i++)
        {
            mp[s[i]]++;
        }
        int dem = 0;
        for(auto x : mp)
        {
            dem = max(dem , x.second);
        }
        cout << dem << endl;
        if(l % 2 == 0)
        {
            if(dem <= l - dem) cout << "1" << endl;
            else cout << "-1" << endl;
            
        }else if(l % 2 == 1)
        {
            if(dem <= (l/2) + 1) cout << "1" << endl;    
            else cout << "-1" << endl;    
        }
    }
    return 0;
}