#include <iostream>

using namespace std;

void printArray(int *arr, int len)
{
    for (int i = 0; i < len; i++) {
        cout << arr[i];
    }
    cout << "\n";
}

int main()
{
    int myArray [6]= {6, 4, 2, 5, 3, 1};
    int len = 6;
    printArray(myArray, len);
}
