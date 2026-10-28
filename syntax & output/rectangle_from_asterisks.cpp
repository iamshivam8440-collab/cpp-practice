// print rectangle from asterisks
#include <iostream>
using namespace std;
int main()
{
    cout << "Print rectangle from asterisks:" << endl;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
    return 0;
}