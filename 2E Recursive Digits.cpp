#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long int P;
	cout << "Enter the value of P: ";
	cin >> P;

	cout << floor(log10(P)) + 1;

	return 0;
}
