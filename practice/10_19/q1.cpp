#include <iostream>
using namespace std;


int main() {
    int num;
    int * ptr;

    cout << "enter a number: ";
    cin >> num;
    ptr = &num;
    cout << "address of the integer: " << ptr << endl;
}
