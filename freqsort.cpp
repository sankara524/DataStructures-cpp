    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;
    map<int ,int>mp;
    bool comp(int a,int b){
        if(mp[a]!=mp[b])
            return mp[a]<mp[b];
        else
            return a<b;
    }
    int main() {
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            vector<int>v(n);
            for(int i=0;i<n;i++){
                cin>>v[i];
                mp[v[i]]++;
            }
            sort(v.begin(),v.end(),comp);
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
            mp.clear();
        }
        
    }
