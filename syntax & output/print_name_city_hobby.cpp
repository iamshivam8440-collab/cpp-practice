#include <iostream>
using namespace std;
int main()
{
    char *name;
    char *city;
    char *hobby;
    name = new char[30];
    city = new char[30];
    hobby = new char[30];
    cout << "Enter your name:";
    cin.getline(name, 50);
    cout << "Enter your city:";
    cin.getline(city, 50);
    cout << "Enter your hobby:";
    cin.getline(hobby, 50);
    cout << "Name is:" << name << endl;
    cout << "City is:" << city << endl;
    cout << "Hobby is:" << hobby << endl;
    delete[] name, city, hobby;
    return 0;
}