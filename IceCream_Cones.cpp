#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y, n;
        cin >> x >> y >> n;

        long long sum = n * y;
        long long ans;

        if(sum >= x)
        {
            ans = 0;
        }
        else
        {
            ans = x - sum;
        }
        cout << ans << endl;
    }

	return 0;
}

