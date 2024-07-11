    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;
    
    int main() {
        int c,v,max=0,i,j;
        cin>>c>>v;
        string s1,s2;
        map<string,string>mp;
        map<string,int>mp1,mp2;
        for(i=0;i<c;i++){
            cin>>s1>>s2;
            mp[s1]=s2;
        }
        for(i=0;i<v;i++){
            cin>>s1;
            mp1[s1]++;
            mp2[mp[s1]]++;
        }
        string res;
        for(auto p:mp2){
            if(p.second>max){
                max=p.second;
                res=p.first;
            }
        }
        cout<<res<<endl;
        max=0;
        for(auto p:mp1){
            if(p.second>max){
                max=p.second;
                res=p.first;
            }
        }
        cout<<res;
        
    }
