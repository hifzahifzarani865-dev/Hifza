#include <iostream>
using namespace std;

int main() {
    float vi, a, t, s;

    cout << "Enter initial velocity (vi): ";
    cin >> vi;

    cout << "Enter acceleration (a): ";
    cin >> a;

    cout << "Enter time (t): ";
    cin >> t;
    
    s = vi * t + 0.5 * a * t * t;

    cout << "The value of S is: " << s;

    return 0;
}
