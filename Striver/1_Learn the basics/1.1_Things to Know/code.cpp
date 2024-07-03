#include <iostream>
using namespace std;

void increment(int x)
{
    x++;
    cout << "Inside function: " << x << endl;
}
void increment1(int &x)
{
    x++;
    cout << "Inside function: " << x << endl;
}
int main()
{

    //? user input / output
    // int x;
    // cout << "Enter the value of x: ";
    // cin >> x;
    // cout << "The value of x is: " << x;

    //? data types
    // 1. int, long, long long, float, double
    // 2. string,getline
    // 3. char

    //? if else statements
    // int age;
    // cout << "Enter your age: ";
    // cin >> age;

    // if (age >= 18)
    // {
    //     cout << "adult";
    // }
    // else
    // {
    //     cout << "not adult";
    // }

    //? switch statements
    // int choice;
    // cout << "Enter a number between 1 and 3: ";
    // cin >> choice;

    // switch (choice)
    // {
    // case 1:
    //     cout << "You entered 1\n";
    //     break;
    // case 2:
    //     cout << "You entered 2\n";
    //     break;
    // case 3:
    //     cout << "You entered 3\n";
    //     break;
    // default:
    //     cout << "Invalid choice\n";
    // }

    //? Array
    // int myArray[5];
    // myArray[0] = 10;
    // myArray[1] = 20;
    // myArray[2] = 30;
    // myArray[3] = 40;
    // myArray[4] = 50;
    // cout << "Element 0: " << myArray[0];
    // cout << "Element 1: " << myArray[1];
    // cout << "Element 2: " << myArray[2];
    // cout << "Element 3: " << myArray[3];
    // cout << "Element 4: " << myArray[4];

    //? strings
    // string greeting = "Hello, world!";
    // string name = "Alice";
    // string message = greeting + " My name is " + name;
    // cout << "Length of message: " << message.length() << endl;
    // cout << "First character: " << message[0] << endl;
    // cout << "Last character: " << message[message.length() - 1] << endl;

    //? for loop
    // int numbers[] = {1, 2, 3, 4, 5};
    // for (int i = 0; i<5; i++) {
    //     cout << numbers[i] << " ";
    // }

    //? while loop
    // int i = 1;
    // while (i <= 5) {
    //     cout << i << " ";
    //     ++i;
    // }
    // cout << endl;

    //? function Pass by Value:

    // int num = 5;
    // cout << "Before function call: " << num << endl;
    // increment(num);
    // cout << "After function call: " << num << endl;
    // return 0;

    //* output
    // Before function call : 5
    // Inside function : 6
    // After function call : 5

    //? function Pass by Reference:
    int num = 5;
    // cout << "Before function call: " << num << endl;
    // increment1(num);
    // cout << "After function call: " << num << endl;

    //* output
    // Before function call: 5
    // Inside function: 6
    // After function call: 6

    //* user input / output example
    // char character;
    // cout << "Enter a Character: ";
    // cin >> character;

    // if (character >= 'A' && character <= 'Z')
    // {
    //     cout << "1";
    // }
    // else if (character >= 'a' && character <= 'z')
    // {
    //     cout << "0";
    // }
    // else
    // {
    //     cout << "-1";
    // }

    return 0;
}
