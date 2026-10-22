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

        int a[101];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n, greater<int>());
        int ans = a[0];

        for(int i = 1; i <= k && i < n; i++)
        {
            ans += a[i];
        }
        cout << ans << endl;
    }

	return 0;
}

