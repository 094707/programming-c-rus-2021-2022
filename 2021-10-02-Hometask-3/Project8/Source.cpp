#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int res = 0;
	int a = 0;

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a;
		res += a;
	}
	cout << res << endl;

	return EXIT_SUCCESS;
}