#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t; cout << t << ' ';
    while (t != 1) {
        if (t % 2 == 0) {
            t = t / 2;
            if (t == 1) cout << t;
            else cout << t << ' ';
        }
        else {
            t = 3 * t + 1;
            if (t == 1) cout << t;
            else cout << t << ' ';
        }
    }
}