// Simple C++ program to calculate sum, difference, product, and division of two numbers
// Includes check division by zero
// Written as practice while learning C++
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double a, b;
  cout << "Enter first number: ";
  cin >> a;
  cout << "Enter second number: ";
  cin >> b;

  cout << "Sum of numbers: " << a + b << endl;
  cout << "Difference of numbers: " << abs(a - b) << endl;
  cout << "Product of numbers: " << a * b << endl;
  if(b != 0)
    cout << "Division of numbers: " << a / b << endl;
  else
    cout << "Cannot divide by zero!\n"; 
    
  
  return 0;
}
