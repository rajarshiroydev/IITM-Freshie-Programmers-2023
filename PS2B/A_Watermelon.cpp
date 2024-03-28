#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t; cin >> t;
    if (t == 2) cout << "NO";
    else {
        if (t % 2 == 0) cout << "YES";
        else cout << "NO";
    }
}

