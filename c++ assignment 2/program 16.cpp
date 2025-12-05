#include <iostream>
using namespace std;

int main() {
    double num = 15.58971;

    int integral = (int)num;                
    double fractional = num - integral;      

    cout << "Integral Part: " << integral << endl;
    cout << "Fractional Part: " << fractional << endl;

    return 0;
}
