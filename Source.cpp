#include "Phone.h"
#include<iostream>
#include<Windows.h>
using namespace std;

int main()
{
    PhoneBook mas[MAX_PHONE_NUMBERS];

    for (int i = 0; i < 2; i++)
    {
        cout << "Enter iformation about student #" << (i + 1) << ":" << endl;
        mas[i].Input();
    }

    cout << "All Students: " << endl;

    for (int i = 0; i < 2; i++)
    {
        mas[i].Output();
    }

    system("pause");
    return 0;