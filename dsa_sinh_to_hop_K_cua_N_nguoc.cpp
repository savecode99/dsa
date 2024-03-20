#include<bits/stdc++.h>
using namespace std;

int n , k ;
bool check = true;
int a[50];
int b[50];
void ktao()
{
    for(int i = 1 ; i <= k ; i++)
    {
        a[i] = i;
    }
}
vector<vector<int>> res ;
void sinh()
{
    int i = k;
    while( i > 0 && a[i] ==  n - k + i)
    {
        i--;
    }
    if( i == 0) check = false;
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
    for(int i = 0 ; i < k ; i++) cin >> b[i];
    while(check)
    {
        vector<int> tmp;
        for(int i = 1 ; i <= k ; i++)
        {
            tmp.push_back(a[i]);
        }
        res.push_back(tmp);
        sinh();
    }

    for(int i= res.size() - 1 ; i >= 0 ; i--)
    {
        bool check2 = true;
        for(int j = 0 ; j < k ; j++)
        {
           if(res[i][j] != b[j])
           {
            check2 = false;
            break;
           } 
        }
        if(check2 == true)
        {
            cout << res.size() - i << endl;
            break;
        }
    }
    return 0;
}