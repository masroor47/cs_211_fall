#include <iostream>
using namespace std;

int main() {
    int n = 0;
    int direction = -1;
    int next = (n + direction + 3) % 3;
    int next_next = (n + 2 * direction + 3) % 3;
    cout << "next: " << next << endl;
    cout << "next next: " << next_next << endl;
    cout << "-1 % 3 = " << -1 % 3 << endl;
}