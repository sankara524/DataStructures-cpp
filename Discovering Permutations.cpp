//Discovering Permutations
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int case_num = 1;case_num <= t;++case_num){
        int noa,nop;
        cin>>noa>>nop;
        string s;
        for(int i=0;i<noa;++i) {
            s += static_cast<char>('A'+i);
        }
        int count=0;
        cout<<"Case "<<case_num <<":\n";
        int l=0;
        do{
            l++;
            cout<<s<<endl;
            if(l==nop){
                break;
            }
        }
        while(next_permutation(s.begin(),s.end()));
    }
    return 0;
}
