#include<iostream>
#include<vector>
using namespace std;





int main() {
    vector<int> inputs;
    int input;
    
    for (int i = 0; i < 6; i++) {
        cout << "input integer number " << i+1 << ": ";
        cin >> input;
        inputs.push_back(input);
    }

    for (int i = 0; i < 6; i++) {
        cout << "integer " << i+1 << ": " << inputs.back() << endl;
        inputs.pop_back();
    }
    cout << endl;
}
