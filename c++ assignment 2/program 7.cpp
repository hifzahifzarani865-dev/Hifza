#include <iostream>
using namespace std;
int main() {
  int rollNo;
    float pf, ic, cg;
    cout << "Enter Roll No.: ";
    cin >> rollNo;
  cout << "Enter marks in Programming Fundamentals (out of 100): ";
    cin >> pf;
   cout << "Enter marks in Introduction to Computing (out of 100): ";
    cin >> ic;
    cout << "Enter marks in Computer Graphics (out of 100): ";
    cin >> cg;
    float total = pf + ic + cg;
    float average = total / 3;
    cout << "Roll No: " << rollNo << endl;
    cout << "Total Marks: " << total << endl;
    cout << "Average Marks: " << average << end|;
  return 0;
}
