#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        bool ok=true;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=0; i+1<n; i=i+2){
            if(arr[0]%2==0){
                if(arr[i]%2 != 0 || arr[i+1]%2 !=1){
                    ok=false;
                    break;
                }
            }
            else {
                if(arr[i]%2 != 1 || arr[i+1]%2 !=0){
                    ok=false;
                    break;
                }
            }
    }
    if (ok && n % 2 == 1) {
            if (arr[0] % 2 == 0 && arr[n-1] % 2 != 0) ok = false;
            if (arr[0] % 2 == 1 && arr[n-1] % 2 != 1) ok = false;
        }
    cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
