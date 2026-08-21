#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long b, g, x, y, n;
        cin >> b >> g >> x >> y >> n;

        long long sum = b + g;
        long long ans = (sum + n - 1) / n;

        if(ans * x <= b && ans * y <= g)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }

	return 0;
}
