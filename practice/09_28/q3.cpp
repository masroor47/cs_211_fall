#include <iostream>
using namespace std;

int factorialIterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int factorialRecursive(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorialRecursive(n-1);
}



int main() {
    int test1 = 5;

    cout << "iterative. factorial of " << test1 << " is " << factorialIterative(test1) << endl;
    cout << "recursive. factorial of " << test1 << " is " << factorialRecursive(test1) << endl;
}