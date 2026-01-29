#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,s,x;
        cin>>n>>s>>x;
        int arr[n];
        int sum=0;
        for(int i=0; i<n; i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        if(sum>s)cout<<"NO"<<endl;
        else if(sum==s)cout<<"YES"<<endl;
        else if(sum<s && (sum-s)%x==0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
return 0;
}