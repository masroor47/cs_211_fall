#include <iostream>
using namespace std;

// My attempt at making a dynamically sized array similar to lists in python, or ArrayList in Java
// Does not work. I guess I don't understand memory management in c++

int main() {
    int* arr = new int[1];
    int size = 1;
    int curr_last = 0;

    int input;
    cout << "Enter a number to append to the array(-1 to stop): ";
    cin >> input;
    while (input != -1) {
        if (curr_last == size) {
            // double the size, copy over the original array

            int* temp = new int[size];
            cout << "made a temp array\n";
            int temp_int;
            for (int i = 0; i < size; i++) {
                temp_int = arr[i];
                temp[i] = temp_int;
                cout << "copied " << temp[i] << endl;
            }
            delete [] arr;
            cout << "deleted arr. Now gonna make it twice as large\n";

            int* arr = new int[size * 2];
            cout << "size of new doubled arr: " << sizeof(arr) << endl;

            for (int i = 0; i < size; i++) {
                temp_int = temp[i];
                arr[i] = temp_int;
                cout << "copied " << arr[i] << endl;
            }
            delete [] temp;
            size *= 2;
    

        }
        arr[curr_last] = input;
        curr_last++;
        cout << "full array after insertion:\n";
        for (int i = 0; i < curr_last; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Enter a number to append to the array(-1 to stop): ";
        cin >> input;

    }

}