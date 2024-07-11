#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,a,i;
    cin>>t;
    while(t--){
       priority_queue<int,vector<int>,greater<int>> pq;
       
       int n;
       cin>>n;
       for(i=0;i<n;i++){
           cin>>a;
           pq.push(a);
       }
       int m1,m2,sum=0;
       while(pq.size()>1)
       {
           m1=pq.top();
           pq.pop();
           m2=pq.top();
           pq.pop();
           sum+=(m1+m2);
           pq.push(m1+m2);
       }
       cout<<sum<<endl;
    }
}//C
