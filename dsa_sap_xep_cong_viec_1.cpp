#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> p1 , pair<int , int > p2)
{
    return p1.second < p2.second;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        vector<pair<int , int>> vt;
        cin >> n;
        int a[n] , b[n]; 

        for(int &x : a) cin >> x;
        for(int &x : b) cin >> x;

        for(int i = 0 ; i < n ; i++)
        {
            vt.push_back({a[i],b[i]});
        }
        sort(vt.begin() , vt.end() , cmp);

        int count = 1;
        int check = vt[0].second;
        for(int i = 1 ; i < n ; i++)
        {
            //cout << x.first << " " << x.second << endl;
            if(vt[i].first >= check )
            {
                count++;
                check = vt[i].second;
            }
        }
        cout << count << endl;
    }
    return 0;
}