#include <iostream>

using namespace std;

struct bulb {
    string wattage;
    string manufacturer;
};

int main() {
    bulb shittyBulb;

    cout << "Enter the wattage of your shitty bulb: ";
    cin >> shittyBulb.wattage;
    
    cout << "Enter the manufacturer of your bulb: ";
    cin >> shittyBulb.manufacturer; // skips words after spaces

    cout << "Information about the bulb:\nWattage: " << shittyBulb.wattage << ".     Manufacturer: " << shittyBulb.manufacturer << endl;
}