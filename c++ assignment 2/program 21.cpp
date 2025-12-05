#include <iostream>
using namespace std;

int main()
 {
    string name;
    int age;
    float height;
    char gender;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height (in feet or meters): ";
    cin >> height;

    cout << "Enter your gender (M/F): ";
    cin >> gender;
    
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
    cout << "Gender: " << gender << endl;

    return 0;
}
