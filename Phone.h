#pragma once
const int MAX_PHONE_NUMBERS = 255;
class Contact
{
	char* fullName;
	char homePhone[15];
	char workPhone[15];
	char mobilePhone[15];
	char* additionalInfo;
public:
	Contact()
	{
		fullName = nullptr;
		strcpy(homePhone, "");
		strcpy(workPhone, "");
		strcpy(mobilePhone, "");
		strcpy(additionalInfo, "");
	};
	Contact(const char* n, const char* hp, const char* wp, const char* mp, const char* ai)
	{
		fullName = new char[strlen(n) + 1];
		strcpy(fullName, n);
		strcpy(homePhone, hp);
		strcpy(workPhone, wp);
		strcpy(mobilePhone, mp);
		strcpy(additionalInfo, ai);
	};
	~Contact()
	{
		delete[] fullName;
		delete[] additionalInfo;
	};

	void Input();
	void Print();

	/*char* GetName();
	char* GetSurname();
	char* GetSecondName();
	int GetHomePhone();
	int GetWorkPhone();
	int GetMobilePhone();
	char* GetAdditionalInfo();

	//modificators
	void SetName(const char* n);
	void SetSurname(const char* sur);
	void SetSecondName(const char* secn);
	void SetHomePhone(int hp);
	void SetWorkPhone(int wp);
	void SetMobilePhone(int mp);
	void SetAdditionalInfo(const char* ai);*/
};