#include <iostream>
using namespace std;

void mergeSorted(int A[], int B[], int C[], int m, int n) {
    int size = m + n;
    int aIdx = 0;
    int bIdx = n - 1;

    for (int i = 0; i < size; i++) {
        
        if (aIdx < m && bIdx >= 0) {
            if (A[aIdx] < B[bIdx]) {
                C[i] = A[aIdx];
                aIdx++;
            
            } else {
                C[i] = B[bIdx];
                bIdx--;
            }
        } else if (aIdx < m) {
            C[i] = A[aIdx]; 
            aIdx++;
        } else if (bIdx >= 0) {
            C[i] = B[bIdx];
            bIdx--;
        }

        cout << "i: " << i << " inserted number: " << C[i] << endl;
    }
}

int main() {
    int a[4] = {1, 3, 5, 7}; 
    int b[5] = {10, 8, 6, 4, 2};
    int c[9] = {0};


    mergeSorted(a, b, c, 4, 5);

    for (int i : c) {
        cout << i << " ";
    }
    cout << endl;
}