#include <iostream>

int main() {

    int j = 10;
    int i = 0;
check: if (i >= 10) {
        goto end;
        
    }

    j += 5;
    j -= 2;
    i++;
    std::cout << "looping again\n";
    goto check;
    end:
    return 0;
}