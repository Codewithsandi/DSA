#include <iostream>
using namespace std;

int main()
{
    int amount,R2000,R500,R200,R100,R50,R20,R10,R5,R2,R1;
    cout<<"Enter the total amount to find the notes: ";
    cin >> amount;

    switch (1)
    {
    case 1 :
        R2000 = amount/2000;
        amount = amount%2000;
        cout << "No of 2000 Rupee : " << R2000 << endl;
    case 2 :
        R500 = amount/500;
        amount = amount%500;
        cout << "No of 500 Rupee : " << R500 << endl;
    case 3 :
        R200 = amount/200;
        amount = amount%200;
        cout << "No of 200 Rupee : " << R200 << endl;
    case 4 :
        R100 = amount/100;
        amount = amount%100;
        cout << "No of 100 Rupee : " << R100 << endl;
    case 5 :
        R50 = amount/50;
        amount = amount%50;
        cout << "No of 50 Rupee : " << R50 << endl;
    case 6 :
        R20 = amount/20;
        amount = amount%20;
        cout << "No of 20 Rupee : " << R20 << endl;
    case 7 :
        R10 = amount/10;
        amount = amount%10;
        cout << "No of 10 Rupee : " << R10 << endl;
    case 8 :
        R5 = amount/5;
        amount = amount%5;
        cout << "No of 5 Rupee : " << R5 << endl;
    case 9 :
        R2 = amount/2;
        amount = amount%2;
        cout << "No of 2 Rupee : " << R2 << endl;
    case 10 :
        R1 = amount/1;
        amount = amount%1;
        cout << "No of 1 Rupee : " << R1 << endl;
    }
}