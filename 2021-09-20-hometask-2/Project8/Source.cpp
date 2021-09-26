#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int a = 0;
	int b = 0;
	int c = 0;
	int n = 0;

	cin >> a >> b >> c;
	if ((a > b + c) || (b > a + c) || (c > a + b))
	{
		cout << "impossible";
	}
	else
	{
		if ((a >= b) && (a >= c))
		{
			n = a;
		}
		if ((b >= a) && (b >= c))
		{
			n = b;
		}
		if ((c >= b) && (c >= a))
		{
			n = c;
		}
		if ((2 * n * n > a * a + b * b + c * c))
		{
			cout << "obtuse" << endl;
		}
		if ((2 * n * n == a * a + b * b + c * c))
		{
			cout << "right" << endl;
		}
		if ((2 * n * n < a * a + b * b + c * c))
		{
			cout << "acute" << endl;
		}
	}

	return EXIT_SUCCESS;
}