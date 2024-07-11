#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k,sum;
    cin>>t;
    while(t--){
        cin>>n>>k;
        vector<int> a(n),b(n),res;
        priority_queue<int,vector<int>,greater<int>> min_pq;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end(),greater<int>());
        sort(b.begin(),b.end(),greater<int>());
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(min_pq.size() < k){
                    min_pq.push(a[i] + b[j]);
                }
                else if(a[i] + b[j] > min_pq.top()){
                    min_pq.pop();
                    min_pq.push(a[i] + b[j]);
                }
                else
                   break;
            }
        }
        while(!min_pq.empty()){
            res.push_back(min_pq.top());
            min_pq.pop();
        }
        for(int i=k-1;i>=0;i--){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}


