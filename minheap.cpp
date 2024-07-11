#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,a,i;
    cin>>t;
    priority_queue<int,vector<int> ,greater<int>> pq; 
    while(t--){
       string str;
       cin>>str;
       if(str=="insert")
       {
           cin>>a;
           pq.push(a);
       }
       if(str=="getMin")
       {
           if(!pq.empty()){
               cout<<pq.top()<<endl;
           }
           else{
               cout<<"Empty\n";
           }
       }
       if(str=="delMin")
       {
           if(!pq.empty())
           {
               pq.pop();
           }
       }
    }//c
}
