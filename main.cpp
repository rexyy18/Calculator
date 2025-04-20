#include <iostream>
using namespace std;

int main()
{
    int number1;
    int number2;
int result;
    char operation;
    cout<<"Enter First Number(0-100): ";
    cin>>number1;
    cout<<"Please enter operation to be used (/,+,-,*): ";
    cin>>operation;
    cout<<"Enter Second Number(0-100): ";
    cin>>number2;
    cout<<number1 <<operation<<number2<<endl;
    switch(operation)
    {
        case '+':
            result = number1 + number2;
        break;
        case '-':
            result = number1 - number2;
        break;
        case '*':
            result = number1 * number2;
        break;
        case '/':
            result = number1 / number2;
    default:
        cout<<"Invalid Operation"<<endl;
        break;
    }
cout<<"result = "<< result <<endl;
    return 0;
}