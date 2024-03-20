#include<bits/stdc++.h>
using namespace std;

bool check = true;
int n ;
int a[100];
void khoitao()
{
    for(int i = 1 ; i <= n ; i++)
    {
        a[i] = 0;
    }
}
void sinh ()
{
    int i = n;
    while(i >= 1 && a[i] == 1)
    {
        a[i] = 0;
        i--;
    }
    if(i == 0)
    {
        check = false;
    }else a[i] = 1;
}
int main()
{
    cin >> n;
    khoitao();
    while(check)
    {
        for(int i = 1 ; i <= n ; i++)
        {
            cout << a[i] ;
        }
        cout << endl;
        sinh();
    }
    return 0;
}