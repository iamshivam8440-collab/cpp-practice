// Swap two variables using std::swap.
#include <iostream>
// using namespace std;
int main()
{
    int num1, num2;
    std::cout << "Enter first number:";
    std::cin >> num1;
    std::cout << "Enter second number:";
    std::cin >> num2;
    std::cout << "Before swap:" << std::endl;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
    std::swap(num1, num2);
    std::cout << "After swap:" << std::endl;
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
    return 0;
}