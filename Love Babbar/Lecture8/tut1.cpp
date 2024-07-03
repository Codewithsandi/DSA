#include <iostream>
using namespace std;
 
int main(){
    int num = 1;
    int ch = '1';

    switch (ch)
    {
    case 1:
        cout<<"First";
        break;
    case 2:
        cout<<"Second";
        break;
    case '1':
        cout<<"Character one";
        break;
    
    default:
        break;
    }

}