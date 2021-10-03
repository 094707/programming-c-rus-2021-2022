#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int res = 1;
	int k = 0;
	int a = 1;

	cin >> n;
	do
	{
		for (int i = 1; i <= k; ++i)
		{
			if (a <= n)
			{
				cout << a << " ";
			}
			++a;
		}
		++k;
		cout << endl;
	} while (a < n);
		
	return EXIT_SUCCESS;
}