#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    string name;

    cout << "Enter student name: ";
    getline(cin, name);

    if (name.empty()) {
        cout << "Name cannot be empty!" << endl;
        return 0;
    }

    vector<string> excuses = {

        name + " couldn't finish the assignment because the laptop battery died unexpectedly.",

        name + " tried finishing the homework, but the internet stopped working.",

        name + " was ready to submit the assignment when the file mysteriously disappeared.",

        name + " spent three hours searching for the homework folder that was on the desktop the whole time.",

        "Just when " + name + " started the assignment, the computer decided to update forever.",

        name + " accidentally submitted the assignment to another folder in another universe.",

        name + "'s keyboard stopped cooperating during the final question.",

        name + " almost completed the homework, but the Wi-Fi vanished like a magician.",

        name + " stayed up to study but fell asleep directly on the textbook.",

        "The assignment was complete, but " + name + "'s system crashed seconds before saving."
    };

    srand(time(0));

    int randomIndex = rand() % excuses.size();

    cout << endl;
    cout << "🎲 Random Excuse Generator 🎲" << endl;
    cout << excuses[randomIndex] << endl;

    return 0;
}
