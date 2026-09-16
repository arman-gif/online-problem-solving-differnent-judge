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

        long long ans = n * y;
        long long sum;

        if(ans >= x)
        {
            sum = 0;
        }
        else
        {
            sum = x - ans;
        }
        cout << sum << endl;
    }

	return 0;
}

