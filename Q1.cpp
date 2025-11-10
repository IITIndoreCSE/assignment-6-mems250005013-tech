//  Write a program in C++ with a function called add to add two complex numbers and another function called subtract to subtract one complex number from another. 
 #include <iostream>
using namespace std;

// add Function to add two complex numbers
void add(float r1, float i1, float r2, float i2) {
    float realPart = r1 + r2;
    float imagPart = i1 + i2;
    if (imagPart >= 0)
        cout << "Sum :" << realPart << " + " << imagPart << "i\n";
    else
        cout << "Sum :" << realPart << " - " << -imagPart << "i\n";
}

// subtract Function to subtract one complex number from another
void subtract(float r1, float i1, float r2, float i2) {
    float realPart = r1 - r2;
    float imagPart = i1 - i2;
   if (imagPart >= 0)
        cout << "Difference :" << realPart << " + " << imagPart << "i\n";
    else
        cout << "Difference :" << realPart << " - " << -imagPart << "i\n";
}

int main() {
    float r1, i1, r2, i2;

    cout << "Complex number 1:\n";
    cin >> r1 >> i1;

    cout << "Complex number 2:\n";
    cin >> r2 >> i2;

    add(r1, i1, r2, i2);
    subtract(r1, i1, r2, i2);

    return 0;
}








/* Test Case 1
Input:
Complex Number 1: 3 + 2i
Complex Number 2: 1 + 4i
Output:
Sum: 4 + 6i
Difference: 2 – 2i
Test Case 2
Input:
Complex Number 1: 5 + 7i
Complex Number 2: 2 + 3i
Output:
Sum: 7 + 10i
Difference: 3 + 4i */
