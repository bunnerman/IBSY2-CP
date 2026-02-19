#include <iostream>
#include <string>
#include <cctype>

using std::cin, std::cout;
using std::string;
using std::isspace;

int main() 
{
	string exampleString;
	int wordCount = 0;
	
	cout << "Enter sentence: ";
	std::getline(cin, exampleString);

	for (auto itr = exampleString.begin(); itr < exampleString.end(); ++itr)
		if (!isspace(*itr) && (itr == exampleString.begin() || isspace(*(itr - 1))))
			++wordCount; 
	
	cout << "Number of words is: " << wordCount;

	return 0;
}

#include <iostream>
#include <string>
#include <cctype>

using std::cin, std::cout;
using std::string;
using std::isspace;

int main() 
{
	string exampleString;
	int wordCount = 0;
	
	cout << "Enter sentence: ";
	std::getline(cin, exampleString);

	for (auto itr = exampleString.begin(); itr < exampleString.end(); ++itr)
		if (!isspace(*itr) && (itr == exampleString.begin() || isspace(*(itr - 1))))
			++wordCount; 
	
	cout << "Number of words is: " << wordCount;

	return 0;
}

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

#include <iostream>
using namespace std;

int main()
{
	int N;
	int n;

	cout << "Enter number: ";
	cin >> N;
	cout << "Enter " << N << " elements: ";
	int ARRAY[N];
	for (int i = 0; i < N; i++)
		cin >> ARRAY[i];
	
	int max;
	int maxIndex[2] = {0, 0};
	int flag = 0;

	for (int i = 0; i < N - 1; i++)
	{
		for (int j = i + 1; j < N; j++)
		{
			int result = ARRAY[i] & ARRAY[j];
			if (result > max || flag == 0)
			{
				if (flag == 0)
					flag = 1;
				max = result;
				maxIndex[0] = i;
				maxIndex[1] = j; 
			}
		}
	}
	 cout << "Max & combination result: " << max;

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int N;

	cout << "Enter number: ";
	cin >> N;
	
	int result = N & 1;

	if (result)
		cout << "Number is odd";
	else
		cout << "Number is even";

	return 0;
}

#include <iostream>
#include <cmath>
using namespace std;

long long int fac(long long int n)
{
	if (n == 1)
		return 1;
	else
		return n * fac(n - 1);
}

int main()
{
	int P;
	cout << "Enter the value of P: ";
	cin >> P;

	auto ftrl = fac(P);
	cout << floor(log10(ftrl)) + 1;

}

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long int P;
	cout << "Enter the value of P: ";
	cin >> P;

	if (P > 0)
		cout << floor(log10(P)) + 1;
	else if (P < 0)
		cout << floor(log10(-P)) + 1;
	else
		cout << "1";
	
	return 0;
}




#include <iostream>
using namespace std;

void rec(int N)
{
	if (N == 1)
		cout << "1 ";
	else
	{
		cout << N << " ";
		return rec(N - 1);
	}
}

int main()
{
	int N;
	cout << "Enter N: ";
	cin >> N;
	rec(N);

	return 0;
}

#include <iostream>
using namespace std;

int rec(int N)
{
	if (N == 0)
		return 0;
	else
		return (N % 10) + rec(N / 10);
}

int main()
{
	int N;
	cout << "Enter N: ";
	cin >> N;
	cout << rec(N);
	return 0;
}

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

#include <iostream>
#include <string>
using namespace std;

void nPrStringRecursive(string *s, int l, int r) 
{
    if (l == r) 
	{
        cout << *s << "\n";
        return;
    }
    for (int i = l; i <= r; i++) 
	{
        swap((*s)[l], (*s)[i]);
        nPrStringRecursive(s, l + 1, r);
		swap((*s)[l], (*s)[i]);
    }
}

int main()
{
	string customStr;
	cout << "Enter string: ";
	cin >> customStr;
	nPrStringRecursive(&customStr, 0, customStr.length() - 1);
}

#include <iostream>
#include <vector>
using namespace std;

void arraySubsetFn(vector<int> &v, int n, int i, int sum, int target, vector<int> &subset)
{
    if (i == n)
    {
        if (sum == target)
        {
            for (int i = 0; i < subset.size(); i++)
    			cout << subset[i] << " ";
            cout << "\n";
        }
        return;
    }

    subset.push_back(v[i]);
    arraySubsetFn(v, n, i + 1, sum + v[i], target, subset);
    subset.pop_back();
    arraySubsetFn(v, n, i + 1, sum, target, subset);
}

int main()
{
    int n;
	int t;
	int target;

    cout << "Number of Elements?: ";
    cin >> n;

    cout << "Target Sum: ";
    cin >> target;

    vector<int> ary;
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> t;
        ary.push_back(t);
    }

    vector<int> subset;
    arraySubsetFn(ary, n, 0, 0, target, subset);
}
