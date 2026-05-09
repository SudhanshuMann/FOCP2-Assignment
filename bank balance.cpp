#include <iostream>
#include <map>
using namespace std;

class Bank {

    map<int, int> balance;

public:

    bool CREATE(int userId, int amount) {

        if (balance.count(userId) == 0) {

            balance[userId] = amount;
            return true;
        }

        balance[userId] += amount;
        return false;
    }

    bool DEBIT(int userId, int amount) {

        if (balance.count(userId) == 0) {
            return false;
        }

        if (balance[userId] < amount) {
            return false;
        }

        balance[userId] -= amount;
        return true;
    }

    bool CREDIT(int userId, int amount) {

        if (balance.count(userId) == 0) {
            return false;
        }

        balance[userId] += amount;
        return true;
    }

    int BALANCE(int userId) {

        if (balance.count(userId) == 0) {
            return -1;
        }

        return balance[userId];
    }
};

int main() {

    int Q;
    cin >> Q;

    Bank obj;

    while (Q--) {

        string query;
        cin >> query;

        if (query == "CREATE") {

            int X, Y;
            cin >> X >> Y;

            if (obj.CREATE(X, Y)) {
                cout << "true" << endl;
            }
            else {
                cout << "false" << endl;
            }
        }

        else if (query == "DEBIT") {

            int X, Y;
            cin >> X >> Y;

            if (obj.DEBIT(X, Y)) {
                cout << "true" << endl;
            }
            else {
                cout << "false" << endl;
            }
        }

        else if (query == "CREDIT") {

            int X, Y;
            cin >> X >> Y;

            if (obj.CREDIT(X, Y)) {
                cout << "true" << endl;
            }
            else {
                cout << "false" << endl;
            }
        }

        else if (query == "BALANCE") {

            int X;
            cin >> X;

            cout << obj.BALANCE(X) << endl;
        }
    }

    return 0;
}
