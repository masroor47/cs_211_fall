#include <iostream>
using namespace std;

int main() {
    int num = 25;
    int * pt;
    pt = &num;

    cout << "num: " << num << endl;
    cout << "pointer to num: " << pt << endl;
    cout << "value at where pointer is pointing to: " << *pt << endl;

    *pt = 26;
    cout << "num after changing through pointer: " << num << endl;


    int a[5] = {1, 2, 3, 4, 5};

    cout << "accessing array through ptr: " << *(a) << endl;
    cout << "accessing array through ptr: " << *(a + 2) << endl;
    
}
