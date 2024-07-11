//C-Minimizing the Max-Min Difference
#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    if(n<=2){
        cout<<0<<endl;
        return 0;
    }
    sort(a.begin(),a.end());
    int min_diff = INT_MAX;
    for(int i=0;i<n;i++){
        if(i>0 && i<n-1){
            min_diff = min(min_diff,max(a[n-1]-a[1],a[n-2]-a[0]));
        }    
        else if(i == 0){ 
            min_diff = min(min_diff,a[n-1]-a[1]);
        }    
        else if(i == n-1){
            min_diff = min(min_diff,a[n-2]-a[0]);
        }
    }
    cout<<min_diff<<endl;
    return 0;
}

