#include<iostream>
#include<vector>
using namespace std;

int main() {

    int q[] = {1, 2, 3, 4, 5};
    vector<int> stack;

    for (int i = 0; i < 5; i++) {
        stack.push_back(q[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        q[i] = stack.back();
        stack.pop_back();
    }

    for (int i = 0; i < 5; i++) {
        cout << q[i] << " ";
    }
    cout << endl;
}
