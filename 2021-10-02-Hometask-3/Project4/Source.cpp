#include <iostream>

using namespace std;

int main(long long argc, char* argv[])
{
	int n = 0;
	int res = 0;
	int k = 0;
	unsigned long long int n1 = 1;
	unsigned long long int k1 = 1;
	unsigned long long int nk = 1;

	cin >> n >> k;
	
	for (int i = 1; i <= n; ++i)
	{
		n1 *= i;
	}
	for (int i = 1; i <= k; ++i)
	{
		k1 *= i;
	}
	for (int i = 1; i <= (n - k); ++i)
	{
		nk *= i;
	}
	res = n1 / (k1 * nk);
	cout << res << endl;

	return EXIT_SUCCESS;
}
