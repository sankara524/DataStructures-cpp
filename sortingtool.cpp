#include <iostream>
#include<bits/stdc++.h>
using namespace std;
map<int,int>mp1,mp2;
bool comp(int a,int b){
    if(mp1[a]!=mp1[b]){
        return mp1[a]>mp1[b];
    }
    else{
        return mp2[a]<mp2[b];
    }
}
int main() {
    int n,k,i;
    cin>>n>>k;
    vector<int>v(n);
    for(i=0;i<n;i++){
        cin>>v[i];
        mp1[v[i]]++;
        if(mp2.find(v[i])==mp2.end()){
            mp2[v[i]]=i;
        }
    }
    sort(v.begin(),v.end(),comp);
    for(i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
