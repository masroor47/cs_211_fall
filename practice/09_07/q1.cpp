


#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int i = 5, j = 9;
    cout << i << j << endl;
    swap(i, j);
    cout << i << j << endl;
}
