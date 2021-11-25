#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int n = 0;

	cin >> a >> b;
	n = (a * (a / b) + b * (b / a)) / (b / a + a / b);
	cout << n << endl;

	return EXIT_SUCCESS;
}