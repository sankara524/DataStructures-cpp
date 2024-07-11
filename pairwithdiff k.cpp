    #include <iostream>
    #include<bits/stdc++.h>
    using namespace std;
    int main() {
        int t;
        cin>>t;
        while(t--){
            int n,a,k;
            cin>>n>>k;
            bool f=false;
            unordered_set<int>s;
            for(int i=0;i<n;i++){
                cin>>a;
                if(s.find(a-k)!=s.end()||s.find(a+k)!=s.end()){
                    f=true;
                    
                }
                else{
                    s.insert(a);
                }
            }
            if(f){
                cout<<"true"<<endl;
            }
            else{
                cout<<"false"<<endl;
            }
        }
        
    }
