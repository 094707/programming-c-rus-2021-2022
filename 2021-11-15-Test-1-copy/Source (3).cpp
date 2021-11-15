#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int min = -1;
	int minx = 10000;
	int j = 0;
	bool found = false;

	cin >> n >> m;
	int* a = new int[n] {0};
	int* b = new int[m] {0};

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}
	for (int i = 0; i < n; ++i)
	{
		minx = 100001;
		for (int k = 0; k < n; ++k)
		{
			if ((a[k] > min) && (a[k] < minx))
			{
				minx = a[k];
			}
		}
		min = minx;
		j = 0;
		do
		{
			if (b[j] == minx)
			{
				found = true;
				cout << b[j] << " ";
			}
			++j;
		} while ((j < m) || (found == false));
		
	}
	cout << endl;
	return EXIT_SUCCESS;
}