#include<bits/stdc++.h>
using namespace std;


int main()
{
   int t;
   cin >> t;
   while(t--)
   {
     	int n ;
        cin >> n;
        priority_queue< int , vector<int> , greater<int> > pq;
        for(int i = 0 ; i < n ; i++)
        {
            int x ; 
            cin >> x;
            pq.push(x);
        }
        long long res = 0;
        while(pq.size() > 1)
        {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            pq.push(x+y);
        }
        cout << pq.top() << endl;

   }
    
}