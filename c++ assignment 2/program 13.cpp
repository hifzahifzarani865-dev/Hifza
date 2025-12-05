#include <iostream>
using namespace std;
 int main() {
    float mm, inches;
    cout << "Enter length in millimeters: ";
    cin >> mm;
    inches = mm / 25.4;
    cout << mm << " millimeters = " << inches << " inches" << endl;
   return 0;
}
