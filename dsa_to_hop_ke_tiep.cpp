#include<bits/stdc++.h>
using namespace std;

int a[50];
int n , k ;
void sinh()
{
    int i = k ;
    while(i > 0 && a[i] == n - k + i)
    {
        i--;
    }
    if(i == 0)
    {
        for(int i = 1 ; i <= k ; i++)
        {
            a[i] = i;
        }
    }
    else
    {
        a[i]++;
        for(int j = i + 1 ; j <= k ; j++)
        {
            a[j] = a[j-1] + 1;
        }
    }

}
int main()
{
    cin >> n >> k;
    for(int i = 1 ; i <= k ; i++)
    {
        cin >> a[i];
    }
    sinh();
     for(int i = 1 ; i <= k ; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}