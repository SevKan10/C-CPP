#include<iostream>
#include <stdlib.h>

using namespace std;
unsigned short yearBorn, age;

int main()
{
    cout << "Enter the year of you birth: " ;
    cin >> yearBorn;     

    age = 2025 - yearBorn;

    cout << "Your age: " ; cout << age << endl;

    system("pause"); // Dừng lại chờ để xem kết quả

    return 0;
}
