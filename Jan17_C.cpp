#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       int n,q;
       cin>>n>>q;
       int arr1[n];
       int arr2[n];
       int m[n]={0};

       for(int i=0; i<n; i++)cin>>arr1[i];
       for(int i=0; i<n; i++)cin>>arr2[i];
       for(int i=0; i<n; i++){
            if(i<n-1)m[i] = max(arr1[i], max(arr2[i], arr1[i+1]));

            else m[i]=max(arr1[i], arr2[i]);
       }

       for(int i=0; i<q; i++){
            int a,b,M=0;
            cin>>a>>b; 
            M+=m[i];
            if(i<n-1)M=max(M,M-m[q-1]+m[q]);
            cout<<M<<" "; 
       }
       cout<<endl;
       
    }
return 0;
}