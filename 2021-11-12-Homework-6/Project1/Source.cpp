#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<clocale>
#include<conio.h>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");
	bool exit = false;
	int capacity = 2;
	int count = 0;
	int* a = new int [capacity] { 0 };

	while (!exit)
	{
		system("cls");
		printf("0 - ����� �� ���������.\n");
		printf("1 - ����� �������� ��������� �������.\n");
		printf("2 - �������� ������� � ����� �������.\n");
		printf("3 - �������� ������� � ������ �������.\n");
		printf("4 - ������� ������� � ����� �������.\n");
		printf("5 - ������� ������� � ������ �������.\n");
		printf("6 - ���������� ������.\n");
		printf("������� ����� �������: ");

		char c = 0;
		cin >> c;

		switch (c)
		{
		case 48: 
			exit = true;
			break;
		case 49:
			printf("������� ������: ");
			for (int i = 0; i < count; ++i)
			{
				cout << a[i] << " ";
			}
			cout << endl;
			system("pause");
			break;
		case 50:
			printf("�������� �����: ");
			if (capacity == count)
			{
				capacity *= 2;
			}
			cin >> a[count];
			++count;
			break;
		case 51:
			printf("�������� �����: ");
			if (capacity == count)
			{
				capacity *= 2;
			}
			for (int i = count; i > 0; --i)
			{
				a[i] = a[i - 1];
			}
			cin >> a[0];
			++count;
			break;
		case 52:
			--count;
			a[count] = 0;
			break;
		case 53:
			--count;
			a[0] = 0;
			for (int i = 0; i < count; ++i)
			{
				a[i] = a[i + 1];
			}
			break;
		case 54:
			int* b = new int[count] { 0 };
			for (int i = 0; i < count; ++i)
			{
				b[i] = a[count - i - 1];
			}
			for (int i = 0; i < count; ++i)
			{
				a[i] = b[i];
			}
			break;
		}
	}
	return EXIT_SUCCESS;
}