#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long
#define debug(x) cout << #x << ' ' << x << endl;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int a, b; cin >> a >> b;
    int count = 1;
    int x = a;
    while (x <= b) {
        cout << x << '\t';

        if (count == 4) {
            cout << endl;
            count = 0;
        }
        x = x + (x + 1);
        count++;
    }
}