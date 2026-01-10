#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, m;
        cin >> n >> k;
        m= k-1;

        set<int> s;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            s.insert(a);
        }

        int cnt = 0;
        bool printed = false;

        for (auto it = s.begin(); it != s.end()&& cnt<m; ++it) {
            if (cnt == k) break;        
            if (*it != cnt) {          
                cout << cnt << endl;
                printed = true;
                break;
            }
            cnt++;
        }

        if (!printed) {
            cout << cnt << endl;
        }
    }
    return 0;
}
