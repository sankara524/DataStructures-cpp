//Interleavings
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void generate_interleavings(const string & A,const string & B,string interleaved,vector<string>&results){
    if(A.empty() && B.empty()){
        results.push_back(interleaved);
        return;
    }
    if(!A.empty()){
        generate_interleavings(A.substr(1),B,interleaved+A[0],results);
    }
    if(!B.empty()){
        generate_interleavings(A,B.substr(1),interleaved+B[0],results);
    }
}
int main(){
    int T; cin>>T;
    for(int case_num=1;case_num<=T;++case_num){
        string A,B; cin>>A>>B;
        vector<string>results;
        generate_interleavings(A,B,"",results);
        sort(results.begin(),results.end());
        cout<<"Case #"<<case_num<<":"<<endl;
        for(const auto & results:results){
            cout<<results<<endl;
        }
    }
    return 0;
}

