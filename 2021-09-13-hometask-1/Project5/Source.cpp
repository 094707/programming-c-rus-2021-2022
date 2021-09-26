#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;

	cin >> n;
	s = n / 100 + n / 10 % 10 + n % 10;
	cout << s << endl;

	return EXIT_SUCCESS;
}