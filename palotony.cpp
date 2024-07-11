#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    string str="abcdefghijklmnopqrstuvwxyz";
    int n,c; cin>>n>>c;
    string s;
    cin>>s;
    map<char,int>mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    int cc=0;
    for(auto p:mp){
        cc++;
    }
    if(cc>c){
        cout<<"0";
    }
    else{
        cout<<c-cc;
    }
    cout<<endl;
    
}
   
}
