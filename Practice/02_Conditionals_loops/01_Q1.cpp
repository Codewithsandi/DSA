// 1. Area Of Circle

#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int radius;

    cout << "Enter radius: ";
    cin >> radius;

    int area = M_PI * pow(radius,2);

    cout << "Area Of Circle: " << area << endl;

    return 0;
}