#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    int k = t;
    int rev = 0;
    while (t > 0) {
        int rem = t % 10;
        rev = rev * 10 + rem;
        t = t / 10;
    }
    if (rev == k) cout << "YES";
    else cout << "NO";
}