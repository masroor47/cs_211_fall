#include <iostream>
using namespace std;

void traverseArr(int *arr) {
    cout << *(arr + 10) << endl;
    cout << "Array: \n";
    for (int i = 0; i < 10; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int main() {
    int test1[10] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

    traverseArr(test1);
}