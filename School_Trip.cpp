#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, x, k;
        cin >> n >> x >> k;

        long long sum = x % k;
        long long ans = sum;

        if(x - sum + k <= n)
        {
            ans = min(ans, k - sum);
        }

        cout << ans << endl;
    }

	return 0;
}

