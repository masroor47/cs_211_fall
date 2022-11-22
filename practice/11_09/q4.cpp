#include <iostream>

using namespace std;

struct Dog {
    string name;
    int age;
    string breed;
};

bool operator== (const Dog dog1, const Dog dog2) {
    if (dog1.name != dog2.name) return false;
    if (dog1.age != dog2.age) return false;
    if (dog1.breed != dog2.breed) return false;
    return true;
}

int main() {
    Dog mine;
    mine.name = "james";
    mine.age = 3;
    mine.breed = "puddel";

    Dog his;
    his.name = "james";
    his.age = 3;
    his.breed = "puddel";

    if (mine == his) {
        cout << "The two dogs are equal\n";
    } else {
        cout << "Different dogs\n";
    }

}