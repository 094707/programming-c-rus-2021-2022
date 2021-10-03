#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int res = 1;

	cin >> n;
	for (int i = 0; i < n; ++i)
	{
		res *= 2;
	}
	cout << res << endl;

	return EXIT_SUCCESS;
}
