#include <iostream>
using namespace std;

int countDistinctPrimes(int n) {
    int count = 0;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            count++;

            while (n % i == 0) {
                n /= i;
            }
        }
    }

    if (n > 1) count++;

    return count;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;

        int k = countDistinctPrimes(n);

        int answer = 1;
        for (int i = 0; i < k; i++) {
            answer *= 2;
        }

        cout << answer << endl;
    }

    return 0;
}
