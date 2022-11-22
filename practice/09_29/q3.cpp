#include <iostream>
using namespace std;

void allFactors(int n) {
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int test1 = 152;
    cout << "All factors of " << test1 << ": \n";
    allFactors(153);
}