#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int k, n, w; cin >> k >> n >> w;
    int total = ((w * (w + 1)) / 2) * k;
    cout << max(0, total - n);
}