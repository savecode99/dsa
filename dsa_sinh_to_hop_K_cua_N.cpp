#include<bits/stdc++.h>
using namespace std;

int n , k ;
int a[50];
bool check = true;

void ktao()
{
    for(int i = 1 ; i <=k ; i++)
    {
        a[i] = i;
    }
}
void sinh()
{
    int i = k;
    while(i >= 1 && a[i] == n - k + i)
    {
        i--;
    }
    if(i == 0 ) check = false;
    else 
    {
        a[i]++;
        for(int j = i+1 ; j <= k ; j++)
        {
            a[j] = a[j-1] + 1;
        }
    }
}
int main()
{
    cin >> n >> k;
    ktao();
    while(check)
    {
        for(int i = 1 ; i <= k ; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    return 0;
}