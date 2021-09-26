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
	case 1: cout << "сто ";
		break;
	case 2: cout << "двести ";
		break;
	case 3: cout << "триста ";
		break;
	case 4: cout << "четыреста ";
		break;
	case 5: cout << "пятьсот ";
		break;
	case 6: cout << "шестьсот ";
		break;
	case 7: cout << "семьсот ";
		break;
	case 8: cout << "восемьсот ";
		break;
	case 9: cout << "девятьсот ";
		break; 
	}
	switch (c2)
	{
	case 1: cout << "десять ";
		break;
	case 2: cout << "двадцать ";
		break;
	case 3: cout << "тридцать ";
		break;
	case 4: cout << "сорок ";
		break;
	case 5: cout << "пятьдесят ";
		break;
	case 6: cout << "шестьдесят ";
		break;
	case 7: cout << "семьдесят ";
		break;
	case 8: cout << "восемьдесят ";
		break;
	case 9: cout << "девяносто ";
		break;
	}
	switch (c3)
	{
	case 1: cout << "один банан";
		break;
	case 2: cout << "два банана";
		break;
	case 3: cout << "три банана";
		break;
	case 4: cout << "четыре банана";
		break;
	case 5: cout << "пять бананов";
		break;
	case 6: cout << "шесть бананов";
		break;
	case 7: cout << "семь бананов";
		break;
	case 8: cout << "восемь бананов";
		break;
	case 9: cout << "девять бананов";
		break;
	default: cout << "бананов";
	}

	return EXIT_SUCCESS;
}