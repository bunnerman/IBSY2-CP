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
