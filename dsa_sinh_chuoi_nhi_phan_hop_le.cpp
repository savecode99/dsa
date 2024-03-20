#include<bits/stdc++.h>
using namespace std;
bool check = true;
int n;
int a[50];
// chuan hoa xoa khoang trang
void chuanhoa(string &s)
{
    n = 0;
    for(int i = 0 ; i < s.size() ; i++)
    {
        if(s[i]==' ') s.erase(i,1);
        else if(s[i]=='?') n++;
    }
}
void ktao()
{
    for(int i = 1 ; i <= n ;i++)
    {
        a[i] = 0;
    }
}
void sinh()
{
    int i = n;
    while( i >= 1  && a[i] == 1)
    {
        i--;
    }
    if(i == 0) check = false;
    else
    {
        a[i] = 1;
        for(int j = i + 1 ; j <= n ; j++)
        {
            a[j] = 0;
        }
    }
}

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while(t--)
    { 
        string s;
        getline(cin,s);
        chuanhoa(s);
        int l = s.length();
        ktao();
        while(check)
        {
            int index = 1;
            string tmp = s;
            for(int i = 0 ; i < l ; i++)
            {
                if(tmp[i] == '?')
                {
                    tmp[i]= '0' + a[index];
                    index++;
                    cout << tmp[i] ;
                }
                else cout << tmp[i];
            }
            cout << endl;
            sinh();
        }
        check = true;
    }
    return 0;
}
