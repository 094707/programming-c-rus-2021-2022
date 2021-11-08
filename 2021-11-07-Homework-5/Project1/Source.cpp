#include<iostream>

using namespace std;

int main(int argc, char* argv)
{
	int n = 0;
	int a1 = 0;
	int a2 = 0;
	int x = 0;
	cin >> n >> a1 >> a2;

	for (int i = 0; i < sizeof(int) * 8; ++i)
	{
		x = i;
		if (i == a1)
		{
			x = a2;
		}
		if (i == a2)
		{
			x = a1;
		}
		int currentBit = (sizeof(int) * 8 - 1 - x);
		int bitMask = 1 << currentBit;
		int bit = n & bitMask;
		bit = bit >> currentBit;
		cout << bit;
		x = i;
		if ((i + 1) % 4 == 0)
		{
			cout << " ";
		}
	}
	cout << endl;

	return EXIT_SUCCESS;
}