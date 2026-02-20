#include <bits/stdc++.h>
using namespace std;

int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int arr[n];
            int mx=0;
            for(int i=1; i<=n; i++){
                cin>>arr[i];
                mx = max(mx,arr[i]);
            }
            cout<<mx*n<<endl;
        }

    return 0;
}
