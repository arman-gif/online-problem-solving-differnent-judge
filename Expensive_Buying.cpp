#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
	cin >> t;

	while (t--)
	{
		int n, k;
		cin >> n >> k;

		vector<int> ans(n);
		for(int i = 0; i < n; i++)
		{
			cin >> ans[i];
		}

		sort(ans.rbegin(), ans.rend());
		long long sum = 0;
		for(int i = 0; i < k; i++)
		{
			sum += ans[i];
		}
		cout << sum << endl;
	}
	

	return 0;
}

