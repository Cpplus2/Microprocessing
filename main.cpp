#include <iostream>
#include <cmath>

using namespace std;

bool isBit(string number);
bool isHexa(string number);
string convert(string number, bool conversion);

int main()
{
    cout << "This program expresses various algorithms that are used to represent microprocessor architecture. " << endl;

    cout << endl << "Arithmetic operations are the core focus of this program. " << endl << endl;

    cout << "Choose: (1) Hexa->Bit Conversion (2) Bit->Hexa Conversion (3) Adder (4) Subtractor " << endl;

    cout << "Enter your choice: "; int choice;
    for(cin >> choice; choice < 1 && choice > 4; cin >> choice)
        cout << "Sorry! There is no such option as the one you have entered. " << endl << "Please try again. " << endl << endl << endl << "Enter a choice (between [1,4]): ";

    string number = "";

    cout << endl;

    switch(choice)
    {
        case 1:
            cout << "Enter the hexadecimal number: ";
            for(cin >> number; !isHexa(number); cin >> number)
                cout << "Sorry! The number you entered is not in hexadecimal form. Please try again. " << endl << endl << "Enter a hexadecimal number: ";

            string converted = convert(number, true);

            break;

        case 2:
            cout << "Enter the binary number: ";
            for(cin >> number; !isBit(number); cin >> number)
                cout << "Sorry! The number you entered is not in binary form. Please try again. " << endl << endl << "Enter a binary number: ";

            string converted = convert(number, false);

            break;

        case 3:
            break;

        case 4:]


            break;

        default:
            cout << "Sorry! Your choice of input is invalid. " << endl;
    }
    return 0;
}

bool isBit(string number)
{
    for(int count = 0; count < number.length(); count++)
        if(number[count] != 48 && number[count] != 49)
            return false;

    return true;
}

bool isHexa(string number)
{
    int count = 0;

    for(char temp = number[count]; count < number.length(); temp = number[count++])
        if(temp < 48 || (temp > 57 && temp < 65) || (temp > 70 && temp < 97) || temp > 102)
            return false;

    return true;
}

string convert(string number, bool conversion)
{
    string num = "";

    if(conversion)
    {
        for(int count = 0; count < number.length(); count++)
        {
            for(int n = 3; number[count] != 0; n--)
            {
                if(pow(2, n) < number[count])
                {
                    num += "1";
                    number[count] -= pow(2, n);
                }
                else
                    num += "0";
            }
        }
        return binary;
    }

    for(int count = number.length - 1; count > 0; count--)
    {

    }
}
