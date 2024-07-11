#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int i,j,tr,dr,ts,ds,TR[100],DR[100],TS[100],DS [100],flag=9,flag1=0;
    cin >> t;
    while(t--){
        cin >> tr;
        for (i=0;i<tr;i++){
            cin >> TR[i];
        }
        cin >> dr;
        for (i=0;i<dr; i++) {
            cin >> DR[i];
        }
        cin >> ts;
        for (i=0;i<ts; i++){
            cin >> TS[i];
        }
        cin >> ds;
        for(i=0;i<ds;i++) {
            cin >> DS[i];
        }
        for (i=0;i<ts; i++) {
            flag=1;
            for(j=0;j<tr;j++){
                if (TS[i]==TR[j]){
                        flag=0;
                }
            }
            if(flag==1)
                break;
          }
        
        if (flag==0){
        for(i=0;i<ds; i++) {
            flag=1;
            for(j=0;j<dr;j++){
                if (DS[i]==DR[j])
                    flag=0;
            }
            if (flag==1)
                   break;
            }
        }
        if (flag==0){
            cout << "yes" << endl;
            
        }
        else{
            cout <<"no" << endl;
        }
    }

return 0;

}
