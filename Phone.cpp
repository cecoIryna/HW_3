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
	char buffer[100]; // ��������� ����� ��� ����� ������

	cout << "������� ���: ";
	cin.getline(buffer, 100);
	name = new char[strlen(buffer) + 1];
	strcpy_s(name, strlen(buffer) + 1, buffer);

	cout << "������� �������� �������: ";
	cin.getline(buffer, 100);

	cout << "������� ������� �������: ";
	cin.getline(buffer, 100);

	cout << "������� ��������� �������: ";
	cin.getline(buffer, 100);

	cout << "������� �������������� ����������: ";
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
	cout << "���: " << name << endl;
	cout << "�������: " << surname << endl;
	cout << "��������: " << secondName << endl;
	cout << "�������� �������: " << homePhone << endl;
	cout << "������� �������: " << workPhone << endl;
	cout << "��������� �������: " << mobilePhone << endl;
	cout << "�������������� ����������: " << additionalInfo << endl;
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
	cout << "���������� ������" << endl;
	Sleep(1000);
}

