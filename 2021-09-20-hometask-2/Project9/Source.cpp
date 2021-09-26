#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int M = 0;
	int N = 0;
	int x = 0;
	int y = 0;

	cin >> M >> N >> x >> y;
	if (x == 1)
	{
		cout << x + 1 << " " << y << endl;
	}
	else
	{
		if (x == N)
		{
			cout << x - 1 << " " << y << endl;
		}
		else
		{
			cout << x + 1 << " " << y << endl;
			cout << x - 1 << " " << y << endl;
		}
	}
	if (y == 1)
	{
		cout << x << " " << y + 1 << endl;
	}
	else
	{
		if (y == M)
		{
			cout << x << " " << y - 1 << endl;
		}
		else
		{
			cout << x << " " << y - 1 << endl;
			cout << x << " " << y + 1 << endl;
		}
	}

	return EXIT_SUCCESS;
}