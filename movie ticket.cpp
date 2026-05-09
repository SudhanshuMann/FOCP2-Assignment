#include <iostream>
#include <map>
#include <set>
using namespace std;

class MovieTicket {
    
    map<int, set<int>> bookedUsers;
    map<int, int> ticketsBooked;

public:

    bool BOOK(int userId, int movieId) {

        if (bookedUsers[movieId].count(userId) == 1) {
            return false;
        }

        if (ticketsBooked[movieId] == 100) {
            return false;
        }

        bookedUsers[movieId].insert(userId);
        ticketsBooked[movieId]++;

        return true;
    }

    bool CANCEL(int userId, int movieId) {

        if (bookedUsers[movieId].count(userId) == 0) {
            return false;
        }

        bookedUsers[movieId].erase(userId);
        ticketsBooked[movieId]--;

        return true;
    }

    bool IS_BOOKED(int userId, int movieId) {

        if (bookedUsers[movieId].count(userId) == 1) {
            return true;
        }

        return false;
    }

    int AVAILABLE_TICKETS(int movieId) {

        return 100 - ticketsBooked[movieId];
    }
};

int main() {

    int Q;
    cin >> Q;

    MovieTicket obj;

    while (Q--) {

        string query;
        cin >> query;

        if (query == "BOOK") {

            int X, Y;
            cin >> X >> Y;

            if (obj.BOOK(X, Y)) {
                cout << "true" << endl;
            }
            else {
                cout << "false" << endl;
            }
        }

        else if (query == "CANCEL") {

            int X, Y;
            cin >> X >> Y;

            if (obj.CANCEL(X, Y)) {
                cout << "true" << endl;
            }
            else {
                cout << "false" << endl;
            }
        }

        else if (query == "IS_BOOKED") {

            int X, Y;
            cin >> X >> Y;

            if (obj.IS_BOOKED(X, Y)) {
                cout << "true" << endl;
            }
            else {
                cout << "false" << endl;
            }
        }

        else if (query == "AVAILABLE_TICKETS") {

            int Y;
            cin >> Y;

            cout << obj.AVAILABLE_TICKETS(Y) << endl;
        }
    }

    return 0;
}
