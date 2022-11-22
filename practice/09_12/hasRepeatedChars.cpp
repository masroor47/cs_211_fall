#include <iostream>

bool hasRepeated(std::string str) {
    int len = str.length();
    int map[26] = {0};

    for (int i = 0; i < len; i++) {
        int idx = str[i] - 97;
        // std::cout << "index of " << str[i] << " is " << idx << std::endl;
        if (map[idx] == 1) {
            return true;
        } else {
            map[idx] = 1;
        }
        // for (int j = i+1; j < len; j++) {
        //     if (str[i] == str[j]) {
        //         return true;
        //     }
        // }
    }
    return false;
}

int main() {
    std::string myString = "asdfgf";
    bool result = hasRepeated(myString);
    if (result) {
        std::cout << "The string " << myString << " has repeated chars\n";
    } else {
        std::cout << "The string " << myString << " doesn't have repeated chars\n";
    }
}