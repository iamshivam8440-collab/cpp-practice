// declare variables for age ,height,initial and student status
#include <iostream>
using namespace std;
int main()
{
    /* initilization */
    int age;
    int height;
    char initial;
    bool isstudent = true;
    cout << "Enter your age:";
    cin >> age;
    cout << "Enter your height:";
    cin >> height;
    cout << "Enter your initial:";
    cin >> initial;
    cout << "Age:" << age << endl;
    cout << "Height:" << height << endl;
    cout << "Initial:" << initial << endl;
    cout << "Statude status:" << isstudent << endl;
    return 0;
}