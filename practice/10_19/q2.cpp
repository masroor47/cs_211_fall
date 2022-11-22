#include <iostream>
using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 6; i++) {
        cout << "address of the " << i << " element: " << (arr + i) << endl;
    }
}
