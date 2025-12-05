#include <iostream>
using namespace std;

int main() 
{
    float a, b, c;

    cout << "Enter value of a: ";
    cin >> a;

    cout << "Enter value of b: ";
    cin >> b;

    cout << "Enter value of c: ";
    cin >> c;

    float disc = (b * b) - (4 * a * c);

    cout << "The value of disc is: " << disc << endl;

    return 0;
}
