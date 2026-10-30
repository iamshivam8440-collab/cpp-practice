// Read a full name using std::getline.
#include <iostream>
// using namespace std;
int main()
{
    std::string name;
    std::cout << "Enter your name:";
    std::getline(std::cin >> std::ws, name); // --> read space
    std::cout << "Name is:" << name;
    return 0;
}