#include <iostream>
using namespace std;

double avg(int nums[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += nums[i];
    }
    return sum / (double)len;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 19};
    cout << avg(arr, 5) << endl;
}