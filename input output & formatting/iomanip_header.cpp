// Print a decimal using fixed and setprecision(2).
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double num;
    cout << "Enter your number:";
    cin >> num;
    cout << fixed << setprecision(2) << num << endl;
    return 0;
}
