#include <iostream>
using namespace std;

bool randomBoolFunc(int a, char c) {
    if (a == 1 and c == 'a') return true;
    return false;
}

// typedef bool (*pointer)(int, char);

int main() {

    bool (*pt)(int, char);
    pt = randomBoolFunc;

    cout << "testing i guess: " << pt(1, 'a') << endl;

}