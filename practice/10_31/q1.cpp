#include <iostream>
#include <vector>

using namespace std;

void reverseArray(int* arr, int size) {
    vector<int> stack;
    for (int i = 0; i < size; i++) {
        stack.push_back(arr[i]);
    }
    for (int i = 0; i < size; i++) {
        arr[i] = stack.back();
        stack.pop_back();
    }
}

int main() {
    int test[] = {5, 4, 3, 2, 1};

    for (int i : test) {
        cout << i << " ";
    }
    cout << endl;

    reverseArray(test, 5);
    
    for (int i : test) {
        cout << i << " ";
    }
    cout << endl;
}