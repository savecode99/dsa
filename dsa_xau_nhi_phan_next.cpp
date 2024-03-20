#include<bits/stdc++.h>
using namespace std;

void sinh(string &s , int n)
{
    
    int i = n ;
    while( i > 0 && s[i] == '1')
    {
        i--;
    }
    if(i == 0)
    {
        for(int j = 1 ; j <= n ; j++) s[j] = '0';
    }
    else 
    {
        s[i] = '1';
        for(int j = i + 1 ; j <= n ; j++)
        {
            s[j] = '0';
        }
    }
}

int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        string b = "0";
        string a;
        cin >> a;
        int n = a.size();
        b += a;
        sinh(b , n);
        for(int i = 1 ; i <= n ; i++) cout << b[i];
        cout << endl;
    }
    return 0;
}