#include <iostream>
#include <vector>

using namespace std;

int  main() {
    vector<int> stack(5, 1);

    for(int i : stack) {
        cout << i << " ";        
    }
    cout << endl;
}
