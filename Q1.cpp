//  Write a program in C++ with a function called add to add two complex numbers and another function called subtract to subtract one complex number from another. 
#include <iostream>
using namespace std;

struct Complex {

    float real;
    float imag;

    
    Complex(float r = 0, float i = 0) : real(r), imag(i) {}
};


Complex add(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}


Complex subtract(const Complex& c1, const Complex& c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}


void display(const Complex& c) {
    if (c.imag >= 0)
        cout << c.real << " + " << c.imag << "i" << endl;
    else
        cout << c.real << " - " << -c.imag << "i" << endl;
}

int main() {
  double x,y;
  double a,b;
  cin>>x>>y;
  cin>>a>>b;
    Complex num1(x, y);  
    Complex num2(a, b);  

    cout << "Complex number 1: ";
    display(num1);
    cout << "Complex number 2: ";
    display(num2);

    Complex sum = add(num1, num2);
    Complex diff = subtract(num1, num2);

    cout << "Sum of complex numbers: ";
    display(sum);
    cout << "Difference of complex numbers: ";
    display(diff);

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
