#include<iostream>
#include <stdlib.h>

using namespace std;

int numOne, numTwo, temp;

int main()
{
    cout << "Enter you state number 1 (a number): ";
    cin >> numOne;
    cout << "Enter you state number 2 (a number): ";
    cin >> numTwo;

    temp = numOne;
    numOne = numTwo;
    numTwo = temp;

    cout << "Now your state number 1 is: "; cout << numOne << endl;
    cout << "Now your state number 2 is: "; cout << numTwo << endl;
    
    system("pause"); // Dòng này sẽ tạm dừng và đợi bạn bấm phím

    return 0;
}