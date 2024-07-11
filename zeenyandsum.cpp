#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   int t;
   cin>>t;
   while(t--){
       int n;
       cin>>n;
       map<int,int>mp;
       for(int i=0;i<n;i++){
           int a;
           cin>>a;
           mp[a]++;
       }
       int pos=0,neg=0;
       for(auto p:mp){
           if(p.first<=0){
              neg+=p.first; 
           }
           else{
               pos+=p.first;
           }
       }
       cout<<pos<<" "<<neg<<endl;
   }
}
