#include <iostream>
using namespace std;

int findStringLen(char * s) {
    int count = 0;

    cout << "string pointer: " << s << endl;

    while (*s != '\0') {
        count++;
        s += 1;
    }
    //cout << "value at string pointer: " << *s << endl;

    return count;
}


int main() {
    char test[] = "Hello";
    int testSize = findStringLen(test);

    cout << "Length of string is: " << testSize << endl;
}

