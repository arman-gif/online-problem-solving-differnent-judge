#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, x;
        cin >> n >> m >> x;

        int sum = (x - 1) / m + 1;
        int ans = sum;
        int total = n - sum + 1;
        int sm = min(ans, total);

        cout << sm << endl;
    }

	return 0;
}

