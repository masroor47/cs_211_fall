#include <iostream>
using namespace std;

int countA(char arr[][4], int len) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < 4; j++) {
            // cout << "Checking " << arr[i][j] << endl;
            if (arr[i][j] == 'a') {
                count++;
            }
        }
    }
    return count;
}

int main() {
    char arr[3][4] = {
        {'a', 'b', 'c', 'd'},
        {'a', 'b', 'c', 'd'},
        {'a', 'b', 'c', 'd'},
    };
    cout << countA(arr, 3) << endl;

}