#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, k;
        cin >> n >> k;

        int ans = min(k, n - k);
        cout << ans << endl;
    }

	return 0;
}

