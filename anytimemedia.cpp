#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,a;
    cin>>t;
    while(t--){
        cin>>n;
        priority_queue<int,vector<int>,greater<int>> min_pq;
        priority_queue<int> max_pq;
        for(int i=0;i<n;i++){
            cin>>a;
            if(max_pq.empty() || a <= max_pq.top())
              max_pq.push(a);
            else
              min_pq.push(a);
            if(max_pq.size() > min_pq.size()+1){
                min_pq.push(max_pq.top());
                max_pq.pop();
            }
            else if(min_pq.size() > max_pq.size()){
                max_pq.push(min_pq.top());
                min_pq.pop();
            }
            cout<<max_pq.top()<<" ";
        }
        cout<<endl;
    }

    return 0;
}

