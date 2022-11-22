#include <iostream>
using namespace std;

void swapArrayPairs(int arr[], int len) {
    int temp = 0;
    for (int i = 0; i < len-1; i+=2) {
        cout << "looping with i: " << i << endl;
        temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;
    }
}

int main() {
    int myArr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    swapArrayPairs(myArr, 8);
    cout << "Swapped array: \n";
    for (int i : myArr) {
        cout << i << " ";
    }
    cout << endl;
}