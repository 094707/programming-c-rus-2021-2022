#include <iostream>
#include <clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int n = 0;
	int c1 = 0;
	int c2 = 0;
	int c3 = 0;

	cin >> n;
	c1 = n / 100;
	c2 = n / 10 % 10;
	c3 = n % 10;
	switch (c1)
	{
	case 1: cout << "��� ";
		break;
	case 2: cout << "������ ";
		break;
	case 3: cout << "������ ";
		break;
	case 4: cout << "��������� ";
		break;
	case 5: cout << "������� ";
		break;
	case 6: cout << "�������� ";
		break;
	case 7: cout << "������� ";
		break;
	case 8: cout << "��������� ";
		break;
	case 9: cout << "��������� ";
		break; 
	}
	switch (c2)
	{
	case 1: cout << "������ ";
		break;
	case 2: cout << "�������� ";
		break;
	case 3: cout << "�������� ";
		break;
	case 4: cout << "����� ";
		break;
	case 5: cout << "��������� ";
		break;
	case 6: cout << "���������� ";
		break;
	case 7: cout << "��������� ";
		break;
	case 8: cout << "����������� ";
		break;
	case 9: cout << "��������� ";
		break;
	}
	switch (c3)
	{
	case 1: cout << "���� �����";
		break;
	case 2: cout << "��� ������";
		break;
	case 3: cout << "��� ������";
		break;
	case 4: cout << "������ ������";
		break;
	case 5: cout << "���� �������";
		break;
	case 6: cout << "����� �������";
		break;
	case 7: cout << "���� �������";
		break;
	case 8: cout << "������ �������";
		break;
	case 9: cout << "������ �������";
		break;
	default: cout << "�������";
	}

	return EXIT_SUCCESS;
}