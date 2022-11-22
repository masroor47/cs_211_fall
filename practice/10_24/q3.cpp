#include <iostream>
using namespace std;

void setZeros(int matrix[3][4]) {

    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 4; j++) {
            *(*(matrix + i) + j) = 0;
        }    
    
    }
}

int main() {
    int q[3][4] = {
        {1, 2, 3, 4}, 
        {1, 2, 3, 4}, 
        {1, 2, 3, 4} 
    };

    setZeros(q);
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << *(*(q + i) + j) << " ";
        }    
        cout << endl;
    }

}