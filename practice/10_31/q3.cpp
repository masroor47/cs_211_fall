#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> names;
    string input;
    cout << "Enter a name, write stop if you don't need this: ";
    cin >> input;
    while (input != "stop") {
        names.push_back(input);
        cout << "Enter a new name, write stop if you wanna stop: ";
        cin >> input;
    }

    while (!names.empty()) {
        cout << "Hello, " << names.back() << ", how is your day?\n";
        names.pop_back();
    }

}