#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;

        if (n % 2 == 0) {
            int a = n / 2 + 1;
            int b = n / 2;

            for (int i = 0; i < n / 2; i++) {
                ans.push_back(a++);
                ans.push_back(b--);
            }
        } else {
            ans.push_back(n / 2 + 1); 

            int a = n / 2 + 2;
            int b = n / 2;

            for (int i = 0; i < n / 2; i++) {
                ans.push_back(a++);
                ans.push_back(b--);
            }
        }
        for (int x : ans) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
