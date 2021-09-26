#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int s = 0;

	cin >> n;
	s = n + 2 - (n % 2) * (n % 2);
	cout << s << endl;

	return EXIT_SUCCESS;
}