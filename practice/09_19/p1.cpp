#include <iostream>
using namespace std;

void printArr(int arr[], int len) {

    for (int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int myArr[] = {3, 5, 7, 1, 8, 2};
    printArr(myArr, 6);
}