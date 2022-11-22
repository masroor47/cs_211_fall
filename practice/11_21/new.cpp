#include <iostream>

using namespace std;

void printArray(int* arr, int capacity) {
    for (int i = 0; i < capacity; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int capacity;
    cout << "Enter capacity: ";
    cin >> capacity;
    int* arr = new int[capacity];

    for (int i = 0; i < capacity; i++) {
        arr[i] = i+1;
    }

    printArray(arr, capacity);

    delete [] arr;

}