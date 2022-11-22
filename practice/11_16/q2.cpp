#include <iostream>
using namespace std;

int substractThree(int a) {
    int b = a - 5;
    return b;
}

int addFive(int a) {
    int b = a + 5;
    return b;
}

int main() {

    int (*addition)(int);
    addition = addFive;
}