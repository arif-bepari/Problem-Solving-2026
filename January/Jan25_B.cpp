#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       int n;
       cin>>n;
       int arr[n];
       int x=-1;
       for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i]!=n-i && x==-1)x=i;
       }

    int maxIdx = x;
    for(int i = x; i < n; i++){
        if(arr[i] > arr[maxIdx])  maxIdx = i;
    }

    if (x != -1  && x < maxIdx)
    reverse(arr + x, arr + maxIdx + 1);

    for(int i=0; i<n; i++)cout<<arr[i]<<" ";
    cout<<endl;

    }
    return 0;
}