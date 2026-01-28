#include <iostream>
using namespace std;

int main()
{
	int N;
	int n;

	cout << "Enter number: ";
	cin >> N;
	cout << "Enter bit to check for (bit 0 is LSB): ";
	cin >> n;

	if (n > 30)
	{
		cout << "Bit not set, also exceeds 32 bit signed integer limit";
		return 0;
	}

	int mask = 1 << n;
	int result = N & mask;
	if (result)
		cout << "Bit is set";
	else
		cout << "Bit is not set";

	return 0;
}
