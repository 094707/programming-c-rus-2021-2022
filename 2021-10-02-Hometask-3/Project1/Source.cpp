#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	unsigned long long int res = 1;
	
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		res *= i;
	}
	cout << res << endl;

	return EXIT_SUCCESS;
}
