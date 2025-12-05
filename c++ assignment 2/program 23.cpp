#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5;
    
    cout << "Enter marks of Subject 1: ";
    cin >> m1;

    cout << "Enter marks of Subject 2: ";
    cin >> m2;

    cout << "Enter marks of Subject 3: ";
    cin >> m3;

    cout << "Enter marks of Subject 4: ";
    cin >> m4;

    cout << "Enter marks of Subject 5: ";
    cin >> m5;

    float total = m1 + m2 + m3 + m4 + m5;
    float average = total / 5;

    cout << "\nTotal Marks = " << total << endl;
    cout << "Average Marks = " << average << endl;

    return 0;
}
