#include <iostream>
#include <vector>
using namespace std;

void mystery(int arr[], int size) {
    int curr = 0;
    for (int i = 0; i < size; i++) {
        curr = *(arr + i);
        if (curr % 2 == 0) {
            *(arr + i) += 2;
        } else {
            *(arr + i) += 1;
        }
    }
}


int main() {
    int test[] = {1, 2, 3, 4, 5, 6};
    mystery(test, 6);
    
    for (int i : test) {
        cout << i << " ";
    }
    cout << endl;

}