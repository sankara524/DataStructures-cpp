#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,a,b,young_r=0,old_r=0;
    cin>>n;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> old;
    priority_queue<pair<int,int>> young;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        if(young.empty() || a <= young.top().first){
          young.push({a,b});
          young_r+=b;
        }
        else{
          old.push({a,b});
          old_r+=b;
        }
        if(young.size() > old.size()+1){
            old.push(young.top());
            young_r-=young.top().second;
            old_r+=young.top().second;
            young.pop();
        }
        else if(old.size() > young.size()){
            young.push(old.top());
            old_r-=old.top().second;
            young_r+=old.top().second;
            old.pop();
        }
        cout<<abs(young_r - old_r)<<endl;
    }
    return 0;//c
}


