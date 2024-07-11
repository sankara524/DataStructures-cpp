#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        int sum=0;
        sort(A.begin(), A.end(), greater<int>());
        for(int i=0,j=N-1;i<N/2;i++,j--){
            sum+=(A[i]-A[j]);
        }
        if(N%2==1){
            sum+=A[N/2];
        }
        cout<<sum<<endl;
        
    }
    
    return 0;
}
