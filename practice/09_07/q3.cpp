#include <iostream>

using namespace std;

void reverseArray(int arr[], int len)
{
    for (int i = 0; i < len / 2; i++)
    {
       int temp = arr[i];
       arr[i] = arr[len-i-1];
       arr[len-i-1] = temp;  
    }

}

int main()
{
    int myArray [5] = {1, 2, 3, 4, 5}; 
    reverseArray(myArray, 5);
    for (int i:myArray) {
        cout << i;
    }
    cout << endl;
}
