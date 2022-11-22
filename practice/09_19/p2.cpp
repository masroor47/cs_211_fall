#include <iostream>
using namespace std;

int getMax(int arr[], int len) {
    int max = arr[0];
    for (int i = 1; i < len; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int myArray[] = {5, 3, 7, 3, 2, 1};
    cout << "The max is: " << getMax(myArray, 6) << endl;
}