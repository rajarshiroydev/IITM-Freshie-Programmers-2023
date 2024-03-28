#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    ll int prod = 1;
    for (int i = t; i >= 1; i--) {
        prod = prod * i;
    }
    cout << prod;
}