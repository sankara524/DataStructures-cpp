    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;
    
    int main() {
      int t;
      cin>>t;
      while(t--){
          unordered_map<char,int>mp;
          string s1,s2;
          cin>>s1>>s2;
          if(s1.length()!=s2.length()){
              cout<<"False"<<endl;
              continue;
          }
          for(int i=0;i<s1.length();i++){
              mp[s1[i]]++;
          }
          for(int i=0;i<s2.length();i++){
              mp[s2[i]]--;
          }
          int j=1;
          for(auto p:mp){
              if(p.second!=0){
                  j=0;
                  break;
              }
          }
          if(j){
              cout<<"True"<<endl;
          }
          else{
              cout<<"False"<<endl;
          }
      }
    }
