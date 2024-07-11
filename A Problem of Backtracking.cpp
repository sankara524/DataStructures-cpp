//A problem of Backtracking
#include <algorithm>
#include <iostream>
using namespace std;
void print(int a[],int n){
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main(){
    int test;
    cin>>test;
    int n[10],a[10],k;
    while(test--){
        for(int i = 0; i < 10; i++)
        cin >> n[i];
        cin >> k;
        bool solved = false;
        for(int i = 0; i < 10; i++) a[i] = i;
        do{
            int k1 = 0;
            for(int i = 0; i < 10; i++){
                k1 += n[i]*a[i];
            }
            if(k1 <= k){
                solved = true;
                print(a, 10);
                break;
            }
        }
        while(next_permutation(a, a+10));
        if(!solved) cout << -1;
        cout << endl;
    }
    return 0;
}
