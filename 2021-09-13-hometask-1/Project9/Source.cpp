#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int z = 0;
	int s = 0;

	cin >> n;
	z = n * n;
	s = z * (z + n + 1) + n + 1;
	cout << s << endl;

	return EXIT_SUCCESS;
}