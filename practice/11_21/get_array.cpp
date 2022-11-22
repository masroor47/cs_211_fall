#include <iostream>

using namespace std;

int* get_array(int capacity) {
    int* arr = new int[capacity];
    return arr;
}


// DOES NOT WORK, STUPID IDEA
int main() {
    int* arrays[10];
    arrays[0] = get_array(10);

}