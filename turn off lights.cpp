#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    for (int k = 1; k <= n; k++) {
        int operations = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                operations++;
                i += k - 1;
            }
        }

        if (operations <= m) {
            cout << k;
            return 0;
        }
    }

    return 0;
}
