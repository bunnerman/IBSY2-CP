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
