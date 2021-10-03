#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int ot = 0;
	int po = 0;
	int no = 0;
	int k = 0;

	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> k;
		if (k == 0)
		{
			++no;
		}
		if (k > 0)
		{
			++po;
		}
		if (k < 0)
		{
			++ot;
		}
	}
	cout << no << " " << po << " " << ot << endl;

	return EXIT_SUCCESS;
}
