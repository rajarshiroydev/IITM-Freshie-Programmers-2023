#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

string prime(int t) {
    for (int i = 2; i < t; i++) {
        if (t % i == 0) return "Composite";
    }
    return "Prime";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    if (t == 1) cout << "Neither";
    else cout << prime(t);
}