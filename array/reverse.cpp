#include <iostream>
using namespace std;
int main()
{
    int number,reverse=0;
    cout<<"enter number";
    cin>>number;
    while (number!=0)

    {
    int rem=number%10;
    reverse=reverse*10+rem;
    number=number/10;
    
    }
    cout<<"reverse number is "<<reverse;
    

    
}