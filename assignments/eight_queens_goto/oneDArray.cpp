#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;


bool check(int queens[8], int c) {
    for (int i = 0; i < c; i++) {
        if (queens[i] == queens[c]) {
            return false;
        }
        if (c - i == abs(queens[c] - queens[i])) {
            return false;
        }
    }
    return true;
}



int main() {
    auto start = high_resolution_clock::now();

    int queens[8] = {0};
    int c = -1, count = 0;
nc: c++;
    if (c == 8) {
        count++;
        goto print;
    }
    queens[c] = -1;

nr: queens[c]++; 
    
    if (queens[c] == 8) {
        goto backtrack;
    }
    if (!check(queens, c)) {
        goto nr;
    }
    
    goto nc;

backtrack:
    c--;
    if (c == -1) {
        goto End;
    }
    goto nr;

print:
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if (queens[j] == i) {
                cout << "X";
            } else {
                cout << "-";
            }
            cout << " ";
        }
        cout << endl;
    }
    cout << "------------------\n";
    goto backtrack;

End:
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "Correct queens placements: " << count << endl;
    cout << "That's all for now, thanks!" << " it took " << duration.count() << " microseconds\n";
    cout << "Thanks for using our queens detection service!\n";
    cout << "If you want more future updates, consider joining our mailing list!\n";
}
