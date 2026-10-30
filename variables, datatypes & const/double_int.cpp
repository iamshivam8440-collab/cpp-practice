// Convert a double to int and observe the decimal part.
#include <iostream>
using namespace std;
int main()
{
    double num = 45.49;
    int value;
    // value = num;
    value = (int)num;
    cout << "Double value:" << num << endl;
    cout << "Integer value:" << value << endl;
    return 0;
}