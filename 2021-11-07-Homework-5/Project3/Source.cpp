#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	double n = 0;
	long long value = 0;
	long long one = 1;
	long long absa = 0;
	double absolute = 0;
	cin >> n;

	value = *((long long*)&n);
	absa = ~(~value | (one << sizeof(double) * 8 - 1));
	absolute = *((double*)&absa);
	cout << absolute << endl;

	return EXIT_SUCCESS;
}