#include "Phone.h"
#include<iostream>
#include<Windows.h>
using namespace std;

Contact::Contact()
{
	fullName = nullptr;
	homePhone;
	workPhone;
	mobilePhone;
	additionalInfo = nullptr;
}
void Contact::Input()
{
	char buffer[100]; // Временный буфер для ввода данных

	cout << "Введите ФИО: ";
	cin.getline(buffer, 100);
	name = new char[strlen(buffer) + 1];
	strcpy_s(name, strlen(buffer) + 1, buffer);

	cout << "Введите домашний телефон: ";
	cin.getline(buffer, 100);

	cout << "Введите рабочий телефон: ";
	cin.getline(buffer, 100);

	cout << "Введите мобильный телефон: ";
	cin.getline(buffer, 100);

	cout << "Введите дополнительную информацию: ";
	cin.getline(buffer, 100);
	additionalInfo = new char[strlen(buffer) + 1];
	strcpy_s(additionalInfo, strlen(buffer) + 1, buffer);
}

Contact::Contact(const char* n, int hp, int wp, int mp, const char* ai)
{
	fullName = new char[strlen(n) + 1];
	strcpy_s(fullName, strlen(n) + 1, n);

	homePhone = hp;

	workPhone = wp;

	mobilePhone = mp;

	additionalInfo = new char[strlen(ai) + 1];
	strcpy_s(additionalInfo, strlen(ai) + 1, ai);
}
void Contact::Print()
{
	cout << "Имя: " << name << endl;
	cout << "Фамилия: " << surname << endl;
	cout << "Отчество: " << secondName << endl;
	cout << "Домашний телефон: " << homePhone << endl;
	cout << "Рабочий телефон: " << workPhone << endl;
	cout << "Мобильный телефон: " << mobilePhone << endl;
	cout << "Дополнительная информация: " << additionalInfo << endl;
	cout << "-------------------" << endl;
}
Contact::~Contact()
{
	if (name != nullptr) {
		delete[] name;
	}
	if (surname != nullptr) {
		delete[] surname;
	}
	if (secondName != nullptr) {
		delete[] secondName;
	}
	if (additionalInfo != nullptr) {
		delete[] additionalInfo;
	}
	cout << "Деструктор вызван" << endl;
	Sleep(1000);
}

