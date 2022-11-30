#include <iostream>

using namespace std;

int nums[100] = {0};


int fibonacci(int n) {
    if (nums[n] != 0) {
        return nums[n];
    }
    nums[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return nums[n];

}

int main() {
    nums[1] = 1;
    nums[2] = 1;


    cout << "Which fibonacci number do you want: ";
    int n;
    cin >> n;
    cout << n << "th fibonacci number is: " << fibonacci(n) << endl;
}
