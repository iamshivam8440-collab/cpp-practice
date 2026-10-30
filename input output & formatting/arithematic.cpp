// Read two numbers and print sum, difference, product, and quotient.
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    cout << "Enter first number:";
    cin >> num1;
    cout << "Enter second number:";
    cin >> num2;
    cout << "Sum is:" << num1 + num2 << endl;
    cout << "Diffence is:" << num1 - num2 << endl;
    cout << "Product is:" << num1 * num2 << endl;
    cout << "Quotient is:" << num1 / num2 << endl;
    return 0;
}
