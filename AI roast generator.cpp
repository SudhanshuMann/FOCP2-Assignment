#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    if (name.empty()) {
        cout << "Name cannot be empty!" << endl;
        return 0;
    }

    vector<string> roasts = {

        name + "'s code runs so slowly that even dial-up internet feels fast.",

        "If laziness had a brand ambassador, it would be " + name + ".",

        name + " doesn't debug code — they negotiate with bugs.",

        name + " writes comments like mystery novels. Nobody understands them.",

        "Even Google asks " + name + " to double-check spellings.",

        name + "'s typing speed is sponsored by buffering.",

        "If procrastination were an Olympic sport, " + name + " would win gold.",

        name + "'s WiFi disconnects just to avoid seeing the code.",

        "The compiler sees " + name + "'s code and starts crying softly.",

        name + "'s debugging technique is refreshing the screen and hoping for magic."
    };

    srand(time(0));

    int randomIndex = rand() % roasts.size();

    cout << endl;
    cout << "🔥 Roast Generator 🔥" << endl;
    cout << roasts[randomIndex] << endl;

    return 0;
}
