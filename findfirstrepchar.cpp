    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;
    
    int main() {
      int t;
      cin>>t;
      while(t--){
          map<char,int>mp;
          string s;
          cin>>s;
          for(int i=0;i<s.length();i++){
              mp[s[i]]++;
          }
          char ch='.';
          for(int i=0;i<s.length();i++){
              if(mp[s[i]]>1){
                  ch=s[i];
                  break;
              }
          }
          cout<<ch<<endl;
      }
    }
