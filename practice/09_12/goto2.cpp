#include <iostream>

int main() {
    char a[] = "Hello";
    int i = 0;
check:
    if (i >= 5) {
        goto end;
    }

    std::cout << a[i] << std::endl;
    i++;
    goto check;
end:
    return 0;
}