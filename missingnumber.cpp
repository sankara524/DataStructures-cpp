#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   long long n,m;
   cin>>n;
   map<long,long>a,b;
   int s;
   //vector<long>v1(n),v2(m);
   for(int i=0;i<n;i++){
       cin>>s;
       b[s]++;
   }
   cin>>m;
   for(int i=0;i<m;i++){
       cin>>s;
       b[s]--;
   }
   
   for(auto p:b){
       if(p.second<0){
           cout<<p.first<<" ";
       }
   }
   
   
   
}
