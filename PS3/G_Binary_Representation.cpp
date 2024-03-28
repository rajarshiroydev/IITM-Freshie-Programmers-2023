#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    int rev = 0;
    while (t > 0) {
        int rem = t % 2;
        cout << rem;
        t = t / 2;
    }
}
