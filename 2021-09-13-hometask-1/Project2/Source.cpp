#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int N = 0;
	int K = 0;
	int s = 0;

	cin >> N >> K;
	s = N % K;
	cout << s << endl;

	return EXIT_SUCCESS;
}