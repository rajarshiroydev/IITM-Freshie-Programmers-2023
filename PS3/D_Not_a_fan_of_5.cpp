#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    int num = 1;

    while (n > 0) {
        if (num % 5 != 0) {
            sum += num;
            n--;
        }
        num++;
    }

    cout << sum << endl;

    return 0;
}
