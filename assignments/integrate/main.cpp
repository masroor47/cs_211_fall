#include <iostream>

using namespace std;

typedef double (*FUNCTION)(double);

double line(double x) {
    return x;
}

double square(double x) {
    return x * x;
}

double cube(double x) {
    return x * x * x;
}

double poly(double x) {
    return x * x - 2 * x + 3;
}

double integrate(FUNCTION f, double a, double b) {
    // adjust precision variable to get better results
    double precision = 0.001;
    double lower_sum = 0;
    double higher_sum = 0;
    double curr_x = a;

    while(curr_x < b) {
        lower_sum += min(f(curr_x), f(curr_x + precision)) * precision;
        higher_sum += max(f(curr_x), f(curr_x + precision)) * precision;
        curr_x += precision;
    }
    // cout << "Under Estimate: " << lower_sum << ". Over Estimate: " << higher_sum << endl;
    return (lower_sum + higher_sum) / 2;
}

int main() {
    
    cout << "integral of f(x) = x from 1 to 5 is: " << integrate(line, 1, 5) << endl;
    cout << "integral of f(x) = x^2 from 1 to 5 is: " << integrate(square, 1, 5) << endl;
    cout << "integral of f(x) = x^3 from 1 to 5 is: " << integrate(cube, 1, 5) << endl;

    // cout << "integral of f(x) = x^2 - 2x + 3 from 1 to 5 is: " << integrate(poly, 0, 5) << endl;
}