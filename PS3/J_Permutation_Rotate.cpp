#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    for (int i = 1; i <= t; i++) {
        for (int j = i; j <= t; j++) {
            cout << j << ' ';
        }
        if (i > 1) {
            for (int k = 1; k < i; k++) {
                cout << k << ' ';
            }
        }
        cout << endl;
    }
}
// 2, 7 + (5 - 7) = 7 + -2 = 5