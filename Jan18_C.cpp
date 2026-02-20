#include <bits/stdc++.h>
using namespace std;

int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int arr[n];
            int cnt=0;
            vector<int>v;
            for(int i=0; i<n; i++){
                cin>>arr[i];
            }
            sort(arr, arr + n);
            n = unique(arr, arr + n) - arr;
            if(n==1){
                cout<<1<<endl;
                continue;
            }
            for(int i=0; i<n-1; i++){
                if(arr[i]+1==arr[i+1])cnt++;
                else {
                    v.push_back(cnt);
                    cnt=0;
                }
            }
            v.push_back(cnt);
            cout<<*max_element(v.begin(), v.end()) +1 <<endl;
        }
    return 0;
}
