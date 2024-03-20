#include<bits/stdc++.h>
using namespace std;

bool check = true;
int n ;
char a[50];
// tao chuoi BBB
void ktao()
{
    for(int i = 1 ; i <= n ; i++)
    {
        a[i] = 'B';
    }
}
// sinh
void sinh()
{
    int i = n ;
    while( i >= 1 && a[i] == 'A')
    {
        a[i] = 'B';
        i--;
    }
    if(i == 0) check = false;
    else a[i] = 'A';
}


int main()
{
    cin >> n;
    ktao();
    while(check)
    {
        for(int i = 1 ; i <= n ; i++)
        {
            cout << a[i];
        }
        cout << endl;
        sinh();
    }
    return 0;
}