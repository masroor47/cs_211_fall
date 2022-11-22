#include <iostream>
using namespace std;

string removeLetters(string str, char c) {
    string res = "";
    int skip = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] != c) {
            continue;
        }
        res += str[i];
    }
    return res;
}

int main() {
    string word = "extraterr";
    cout << removeLetters(word, 'r') << endl;
}