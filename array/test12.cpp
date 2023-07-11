#include <iostream>
using namespace std;

int main()
{

    int i, number, sume = 0;
    cout << "enter 0 to exit  the code and  for result" << endl;
    while (true)
    {

        cout << "enter number";
        cin >> number;

        if (number == 0)
        {
            cout << sume;
            break;
        }
        else
        {

            sume = sume + number;
        }
    }
    return 0;
}