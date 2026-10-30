// Declare a constant for pi and calculate a circle's circumference.
#include <iostream>
using namespace std;
int main()
{
    const double PI = 3.1415926535897932384626433832795;
    double radius;
    cout << "Enter the radius of circle:";
    cin >> radius;
    double temp = 2 * PI * radius;
    cout << "Area of circumference:" << temp << endl;
    return 0;
}