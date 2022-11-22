#include <iostream>
using namespace std;

void minAndMax(int arr[], int size) {
    int min = arr[0];
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (arr[i] < min) min = arr[i];

        if (arr[i] > max) max = arr[i];


    }
    cout << "Min: " << min << ", Max: " << max << endl;
}

int main() {
    int test[] = {4, 2, 6, 8, 5, 1, 9, 3};
    minAndMax(test, 8);
}