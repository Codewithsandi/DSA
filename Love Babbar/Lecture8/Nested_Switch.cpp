#include <iostream>
using namespace std;

int main()
{
    char ch = '1';

    int num = 1;

    switch (ch)
    {
    case 1:
        cout << "First" << endl;
        break;
    case '1':
        switch (num)
        {
        case 1:
            cout << "Again first" << endl;
            break;
        case 2:
            cout << "Second" << endl;
            break;

        default:
            cout << "default nested" << endl;
            break;
        }
        cout << "Character one" << endl;
        break;

    default:
        cout << "default case" << endl;
        break;
    }
}