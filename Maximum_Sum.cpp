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

        int a[105];
        long long total = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            total += a[i];
        }

        long long ans = 0;
        for(int i = 0; i < k; i++)
        {
            ans += a[i];
        }

        long long sum = ans;
        int f = k - 1;
        int b = n - 1;
        for(int i = 0; i < k; i++)
        {
            ans -= a[f];
            ans += a[b];
            f--;
            b--;
            sum = min(sum, ans);
        }

        cout << total - sum << endl;
    }

	return 0;
}

