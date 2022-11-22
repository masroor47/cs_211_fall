#include <iostream>
using namespace std;

bool checkSortedAscending(int arr[], int len) {
    for (int i = 0; i < len-1; i++) {
        if (arr[i] > arr[i+1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int test1[] = {1, 3, 5, 6, 8, 9};
    int test2[] = {4, 5, 7, 8, 3, 9};
    if (checkSortedAscending(test1, 6)) {
        cout << "Test 1 passed!\n";   
    }
    if (!checkSortedAscending(test2, 6)) {
        cout << "Test 2 passed!\n";
    }
}