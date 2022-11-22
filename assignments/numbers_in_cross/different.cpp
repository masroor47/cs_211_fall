#include <iostream>
using namespace std;

bool ok() {



    return true;
}

int main() {
    int adjecency[8][5] = {
        {-1, 0, 0, 0, 0},
        {0, -1, 0, 0, 0},
        {0, 1, -1, 0, 0},
        {0, 2, -1, 0, 0},
        {1, 2, -1, 0, 0},
        {1, 2, 3, 4, -1},
        {2, 3, 5, -1, 0},
        {4, 5, 6, -1, 0}
    };

}
