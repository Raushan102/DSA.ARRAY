#include <iostream>
using namespace std;

int main()
{
    int number, reverse = 0;
    cout << "enter number";
    cin >> number;

    int copy_of_Number=number;

    while (number != 0)
    {
        int rem = number % 10;
        reverse = reverse * 10 + rem;
        number = number / 10;
    }
    

    if (reverse == copy_of_Number)
    {
        cout << "enter number is palindrome number";
    }
    else
    {
        cout << "enter number is not palindrome number";
    }
    return 0;
}