#include<iostream>
#include <stdlib.h>

using namespace std;
int inputNum;

int main()
{

    cout << "Enter you number: ";
    cin >> inputNum;

    // if (inputNum % 2 == 0) {cout << inputNum; cout << " is even" << endl;}
    // else {cout << inputNum; cout << " is odd" << endl;}

    cout << (inputNum % 2 == 0 ? "is even" : "is odd") << endl;

    system("pause");
    return 0;
}