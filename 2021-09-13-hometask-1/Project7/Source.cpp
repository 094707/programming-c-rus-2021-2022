#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int s = 0;

	cin >> a >> b;
	s = a;
	a = b;
	b = s;
	cout << a << " " << b << endl;

	return EXIT_SUCCESS;
}