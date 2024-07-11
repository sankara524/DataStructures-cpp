    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;
    
    int main() {
       int n;
       cin>>n;
       string s;
       map<string ,int >mp;
       for(int i=0;i<n;i++){
           cin>>s;
           mp[s]++;
       }
       int max=0;
       string res;
       for(auto p:mp){
           if(p.second>=max){
               max=p.second;
               res=p.first;
           }
       }
       cout<<res<<" "<<max;
    }
