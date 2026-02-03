#include <iostream>
using namespace std;

int rec(int N, int m)
{
	if (m == 0)
		return 1;
	else
		return rec(N, m - 1) * N;
}

int main()
{
	int N, m;
	cout << "Enter Base: ";
	cin >> N;
	cout << "Enter Exponent: ";
	cin >> m;
	cout << rec(N, m);

	return 0;
}
