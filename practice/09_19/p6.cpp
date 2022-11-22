#include <iostream>
using namespace std;

int lenLastWord(string s) {
    int max;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != ' ') {
            max++;
        } else {
            max = 0;
        }
    }
    return max;
}

int lengthOfLastWord(string s) {
    int word = 0;
    bool stop = false;
    bool start = true;
    bool foundLetter = false;
    int count = s.length() - 1;
    while (start && !stop) {
        if (s[count] != ' ') {
            foundLetter = true;
            word++;
        } else if (s[count] == ' ' && foundLetter) {
            stop = true;
        }
        count--;
    }
    return word;
}

int main() {
    string test1 = "what a wonderful day you heathen      ";
    cout << "Length of last word is: " << lenLastWord(test1) << endl;
    cout << "Length of last word is: " << lengthOfLastWord(test1) << endl;
}