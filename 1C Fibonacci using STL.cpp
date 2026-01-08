#include <iostream>
#include <vector>

using std::cin, std::cout;
using std::vector;

int main() 
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> fibonacci;

    fibonacci.push_back(0);
	fibonacci.push_back(1);
    for (int i = 2; i < n; i++) 
        fibonacci.push_back(fibonacci[i - 1] + fibonacci[i - 2]);

    for (int i = 0; i < n; i++)
        cout << fibonacci[i] << " ";

	return 0;
}
