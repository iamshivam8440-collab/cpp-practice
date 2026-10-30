// Use auto and identify the inferred types.
#include <iostream>
using namespace std;
int main()
{
    auto a = 10;
    auto b = 10.5;
    auto c = 'S';
    auto d = true;
    auto e = "Hello";
    // inferred type is their datatypes
    // auto a = 10; -->inferred type int
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    return 0;
}