#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    unordered_map<string,int>mp;
    for(int i=0;i<n;i++){
        cin>>s;
        if(mp.find(s)==mp.end()){
            mp[s]++;
            cout<<"OK"<<endl;
        }
        else{
            cout<<s+to_string(mp[s])<<endl;
            mp[s]++;
        }
    }
}

