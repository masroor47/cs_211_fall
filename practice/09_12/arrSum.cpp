#include <iostream>

int arrSum(int arr[], int len) {
    int sum = 0;
    for (int i = 0; i < len; i++) {
        sum += arr[i];
    }
    return sum;
}


int main() {
    int myArr[5] = {1, 2, 3, 4, 5};
    std::cout << "The sum of the array is: " << arrSum(myArr, 5) << std::endl;
}