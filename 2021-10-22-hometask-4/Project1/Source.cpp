#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int a[100] = { 0 };
	int sum = 0;
	int proiz = 1;
	int index_min = 0;
	int min = 0;
	int max = 0;
	int index_max = 0;

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cout << "Array:";
	for (int i = 0; i < n; ++i)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	
	cout << "Even:";
	for (int i = 0; i < n; ++i)
	{
		
		if (a[i] % 2 == 0)
		{
			cout << a[i] << " ";
		}
	}
	cout << endl;

	cout << "Sum:";
	for (int i = 0; i < n; ++i)
	{
		sum += a[i];
	}
	cout << sum << endl;

	cout << "Product of negative:";
	for (int i = 0; i < n; ++i)
	{
		if (a[i] < 0)
		{
			proiz *= a[i];
		}
	}
	cout << proiz << endl;

	cout << "First min index:";
	min = a[0];
	for (int i = 1; i < n; ++i)
	{

		if (a[i] < min)
		{
			min = a[i];
			index_min = i;
		}
	}
	cout << index_min << endl;

	cout << "Second max:";
	max = a[0];
	for (int i = 1; i < n; ++i)
	{

		if (a[i] > max)
		{
			max = a[i];
			index_max = i;
		}
	}

	max = a[0];
	for (int i = 1; i < n; ++i)
	{

		if ((a[i] > max) && (i != index_max))
		{
			max = a[i];
		}
	}
	cout << max << endl;

	cout << "Reverse:";
	for (int i = n - 1; i >= 0; --i)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	cout << "Odd indexes:";
	for (int i = 0; i < n; i += 2)
	{
		cout << a[i] << " ";
	}
	cout << endl;

	return EXIT_SUCCESS;
}
