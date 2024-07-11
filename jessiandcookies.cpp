#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a,k,i,count=0,c1,c2;
    cin>>n;
    cin>>k;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(i=0;i<n;i++){
        cin>>a;
        pq.push(a);
    }
    
    
        while(((pq.top()<k))&&pq.size()>1){
            c1=pq.top();
            pq.pop();
            c2=pq.top();
            pq.pop();
            pq.push(c1+(2*c2));
            count++;
        }
        
        if(pq.top()<k)
    {
        cout<<-1;
    }
    else{
        cout<<count;
    }//cv
    
}
