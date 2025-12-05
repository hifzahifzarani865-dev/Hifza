#include <iostream>
using namespace std;

int main() {
    float rupees = 12000;
    float dollar_rate = 60; 

    float dollars = rupees / dollar_rate;

    cout << rupees << " Rupees is equal to " << dollars << " Dollars." << endl;

    return 0;
}
