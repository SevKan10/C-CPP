#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;
float weight, high, BMI;
int main()
{
    cout << "Enter your weight (kg) : "; cin >> weight;
    cout << "Enter your high (m): "; cin >> high;

    BMI =  weight / pow(high,2);

    cout << "Your BMI: "; cout << BMI; cout << "(kg/m^2)" << endl;

    system("pause");
    return 0;
}