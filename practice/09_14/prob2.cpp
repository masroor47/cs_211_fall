#include <iostream>
using namespace std;

void printCharArray(char arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {
    char myArr[4] = {'a', 'b', 'c', 'd'};
    printCharArray(myArr, 4);
}