#include <iostream>
using namespace std;

struct student {
    string name;
    int age;
    string dateOfBirth;
    string color;
};

int main() {
    student notMe;
    notMe.name = "Masroor";
    notMe.age = 200;
    notMe.dateOfBirth = "2002-03-10";
    notMe.color = "purple";

    cout << notMe.name << endl;
    cout << notMe.age << endl;
    cout << notMe.dateOfBirth << endl;
    cout << notMe.color << endl;
}


