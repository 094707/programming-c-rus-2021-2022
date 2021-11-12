#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int a[2] = { 0 };
	for (int i = 0; i < 3; ++i)
	{
		a[i] = 228 + i;
		cout << a[i] << endl;
	}
	return EXIT_SUCCESS;
}