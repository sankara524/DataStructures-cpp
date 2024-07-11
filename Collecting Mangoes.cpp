//Collecting Mangoes
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,value,i;
    cin>>t;
    char ch;
    for(i=1;i<=t;i++){
        cout<<"Case "<<i<<":\n";
        stack<int>st;
        cin>>n;
        while(n--){
            cin>>ch;
            if(ch=='A'){
                cin>>value;
                if(st.empty()){
                    st.push(value);
                }
                else{
                    st.push(max(value,st.top()));
                }
            }
            else if(ch=='R'){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                if(st.empty()){
                    cout<<"Empty\n";
                }
                else{
                    cout<<st.top()<<"\n";
                }
            }
        }
    }
}
