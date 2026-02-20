#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, cnt = 0;
        cin >> n;

        string s;
        cin >> s;

       
        if(n==1){cout<<1<<endl; continue;}
        s="0"+s;
         int len = s.size();
        for (int i = 0; i + 1 < len; ) {
            if (s[i] == '0' && s[i + 1] == '0') {
                s[i + 2] = '1';
                //cout<<i<<" ";
                i += 3;
            } else {
                i++;
            }
        }

        for (char c : s) {
            if (c == '1') cnt++;
        }

        cout << cnt << "\n";
    }

    return 0;
}
