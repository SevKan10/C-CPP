#include<iostream>
#include<stdlib.h>

using namespace std;

int inputNum, sum;

int main()
{
    cout << "Enter your number: ";
    cin >> inputNum;

    sum = 0; inputNum = abs(inputNum);

    while (inputNum > 0)
    {
        sum += inputNum % 10; // <=> sum = sum + inputNum
        inputNum = inputNum / 10;
    }

    cout << "Sum: " << sum <<endl;

    system("pause");
    return 0;
}