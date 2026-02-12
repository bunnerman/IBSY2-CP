#include <iostream>
#include <vector>
using namespace std;

void f(vector<int> &v, int n, int i, int sum, int target, vector<int> &subset)
{
    if (i == n)
    {
        if (sum == target)
        {
            for (int x : subset) cout << x << " ";
            cout << "\n";
        }
        return;
    }

    subset.push_back(v[i]);
    f(v, n, i + 1, sum + v[i], target, subset);
    subset.pop_back();
    f(v, n, i + 1, sum, target, subset);
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
    f(ary, n, 0, 0, target, subset);
}
