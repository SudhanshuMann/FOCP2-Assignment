#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.rbegin(), a.rend());

        set<int> usedA, usedB;

        int alex = 0, bob = 0;
        bool turn = 0;

        for (int i = 0; i < n; i++) {
            int val = a[i];

            if (turn == 0) {
                if (usedA.find(val) == usedA.end()) {
                    alex += val;
                    usedA.insert(val);
                    turn = 1;
                }
            } else {
                if (usedB.find(val) == usedB.end()) {
                    bob += val;
                    usedB.insert(val);
                    turn = 0;
                }
            }
        }

        if (alex > bob)
            cout << "Alex\n";
        else
            cout << "Bob\n";
    }

    return 0;
}
