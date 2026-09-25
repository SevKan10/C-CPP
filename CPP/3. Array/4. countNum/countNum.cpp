#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int time, i, sum = 0, odd = 0, even = 0;
    int a[100];
    
    cout << "Enter your time input: ";
    cin >> time;

    // Nhập dãy số
    for (i = 0; i < time; i++) {cout << "Enter your number: "; cin >> a[i];}

    cout << "\nYour array: ";
    for (i = 0; i < time; i++) {cout << a[i] << " ";}
    cout << endl;

    for (i = 0; i < time; i++) {(a[i] % 2 == 0 ? even++ : odd++ );}
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl; 
    cout << endl;
    
    system("pause");
    return 0;
}
