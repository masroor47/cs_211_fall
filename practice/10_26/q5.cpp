#include<iostream>
#include <vector>

using namespace std;

vector<int> timesTen(vector<int> stack) {

    vector<int> temp;

    // fill up the temp array 
    while (stack.back()) {
        temp.push_back(stack.back());
        cout << "adding " << stack.back() << " to temp\n";
        stack.pop_back();
    }

    cout << "very first elt: " << stack.back() << endl;

    while (temp.back()) {
        cout << temp.back() << " ";
        stack.push_back(temp.back() * 10);
        temp.pop_back();
    }
    cout << endl;

    return stack;
}



int main() {
    vector<int> test;
    for (int i = 1; i < 7; i++) {
        test.push_back(i);
        cout << "Generating original vector: " << test.back() << endl;
    }

    vector<int> multiplied = timesTen(test);

    for (int i = 0; i < 6; i++) {
        cout << "new vector at " << i  << ": " << multiplied[i] << endl;
    }
}
