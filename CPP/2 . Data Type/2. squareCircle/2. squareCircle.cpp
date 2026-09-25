#include<iostream>
#include<cmath>
#include <stdlib.h>

using namespace std;

float radius, square, perimeter;

int main()
{
    cout << "Enter you radius: ";
    cin >> radius;
    
    square = pow(radius,2)*3.14;  //pow(x,y) => x mũ y 
    perimeter = radius*2*3.14;

    cout << "Your square: "; cout << square << endl; 
    cout << "Your perimeter: "; cout << perimeter << endl;

    system("pause"); // Dừng lại chờ để xem kết quả

    return 0;
}
