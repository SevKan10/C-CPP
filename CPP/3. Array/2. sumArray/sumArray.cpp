#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int time, i, sum = 0;
    int a[100];
    
    cout << "Enter your time input: ";
    cin >> time;

    // Nhập dãy số
    for (i = 0; i < time; i++) {cout << "Enter your number: "; cin >> a[i];}

    cout << "\nYour array: ";
    for (i = 0; i < time; i++) {cout << a[i] << " ";}
    cout << endl;

    cout << "\nYour sum array: ";
    for (i = 0; i < time; i++) {sum += a[i];}
    cout << sum << endl;
    
    system("pause");
    return 0;
}
