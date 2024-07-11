//Reverse The Sentence
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i;  cin>>t;
    string str,word;
    cin.ignore();
    while(t--){
        stack<string>st;
        getline(cin,str);
        for(i=0;i<str.length();i++){
            if(str[i]!=' '){
                word=word+str[i];
            }
            else{
                st.push(word);
                word.clear();
            }
        }
        st.push(word);
        word.clear();
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
        cout<<"\n";
    }
}
