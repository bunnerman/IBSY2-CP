#include <iostream>
#include <vector>

using std::cin, std::cout;
using std::vector;

int main() 
{
	vector<vector<int>> mtrx;
	int r, c;
	
	cout << "Enter dimensions of matrix (R x C): ";
	cin >> r; 
	cin >> c;
	mtrx.resize(r);
	cout << "Enter " << r * c << " elements: ";
	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
		{
			int t;
			cin >> t;
			mtrx[i].push_back(t);
		}

	vector<vector<int>> tMtrx(c, vector<int>(r));

	for (int i = 0; i < r; i++)
		for (int j = 0; j < c; j++)
			tMtrx[j][i] = mtrx[i][j];
	for (int i = 0; i < c; i++)
	{
		for (int j = 0; j < r; j++)
			cout << tMtrx[i][j] << " ";
		cout << "\n";
	}	

	return 0;
}
