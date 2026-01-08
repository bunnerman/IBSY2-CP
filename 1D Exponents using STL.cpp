#include <iostream>
#include <vector>
#include <algorithm>

using std::cin, std::cout;
using std::vector;

int main() 
{
	int base;
	int expo;
	
	cout << "Enter base: ";
	cin >> base;
	cout << "Upto exponent?: ";
	cin >> expo;
	
	vector<int> nums(expo + 1);
	long long int currentNumber = 1;
	std::generate(nums.begin(), nums.end(), [&]()
	{
		// lambda
		long long t = currentNumber;
		currentNumber *= base;
		return t;
	});

	long long int finalSoln = nums.back();
	for (auto itr = nums.begin(); itr < nums.end(); ++itr)
		cout << *itr << " ";

	cout << "\n" << base << "^" << expo << " is " << finalSoln;
	return 0;
}
