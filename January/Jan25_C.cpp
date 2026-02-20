#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), b(n);
        for(int i=0;i<n;i++) cin >> a[i];
        for(int i=0;i<n;i++) cin >> b[i];

        // Step 1: compute max possible value at each position
        vector<int> m(n);
        m[n-1] = max(a[n-1], b[n-1]);
        for(int i=n-2; i>=0; i--) {
            m[i] = max(a[i], b[i]);
            m[i] = max(m[i], m[i+1]); // propagate suffix max
        }

        // Step 2: prefix sum for fast query
        vector<long long> prefix(n+1,0); // 1-based
        for(int i=1; i<=n; i++) prefix[i] = prefix[i-1] + m[i-1];

        // Step 3: answer queries
        for(int i=0; i<q; i++){
            int l,r;
            cin >> l >> r;
            cout << prefix[r] - prefix[l-1] << " ";
        }
        cout << "\n";
    }

    return 0;
}
