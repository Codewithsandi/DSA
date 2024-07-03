#include <iostream>
using namespace std;
 
int main(){
    char ch;

    cout << "Enter a UpperCase or LowerCase or SpecialCharacter or Number or ControlCharacter: ";
    cin >> ch;
    if (ch>=65 && ch<= 90)
    {
        cout << ch << " is UpperCase";
    }
    else if (ch>=97 && ch<= 122)
    {
        cout << ch << " is LowerCase";
    }
    else if ((ch>=32 && ch<= 47) && (ch>=58 && ch<=64) && (ch>=123 && ch<=126))
    {
        cout << ch << " is SpecialCharacter";
    }
    else if (ch>=48 && ch<= 57)
    {
        cout << ch << " is Number";
    }
    else if ((ch>=0 && ch<= 31) && (ch==127))
    {
        cout << ch << " is ControlCharacter";
    }
    else{
        cout << ch << " invalide";
    }
}