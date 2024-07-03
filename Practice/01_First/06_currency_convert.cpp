// 6. Input currency in rupees and output in USD.

#include <iostream>
using namespace std;

void convertAmount(int amount){
    cout << "Total amount is USD is: " << amount * 83.49 << endl;
}

int main()
{
    int amount;
    cout << "Enter amount: ";
    cin >> amount;

    convertAmount(amount);

    return 0;
}