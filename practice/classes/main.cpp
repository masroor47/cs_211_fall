#include <iostream>

using namespace std;

// rational number
class Rat { 
    private:
        int n; // numerator
        int d; // denominator

    public:
        // Default constructor
        Rat() {
            n = 0;
            d = 1;
        }
        // 2 parameter constructor
        Rat(int num, int den) {
            n = num;
            d = den;
        }

        // Conversion constructor
        // Activates whenver c++ needs to convert an integer to a Rat
        Rat(int num) {
            n = num;
            d = 1;
        }

        int getNumerator() { return n; }

        int getDenominator() { return d; }



        Rat operator+(Rat r) { // If you input an integer instead of Rat, it calls a converter
            Rat t;
            t.n = n * r.d + d * r.n;
            t.d = d * r.d;
            return t;
        }

        void print() {
            cout << " " << n << endl;
            cout << "---\n";
            cout << " " << d << endl;
        }

};




int main() {

    Rat x = Rat(2, 3);
    x.print();
    // cout << x << endl;

    Rat result = x + 5;
    result.print();
}