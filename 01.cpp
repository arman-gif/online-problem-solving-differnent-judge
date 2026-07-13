#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        long long sum = n - m;
        if(m < n)
        {
            cout << sum << endl;
            continue;
        }

        long long ans = m % n;
        long long sub = n - ans;
        if(ans == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << min(ans, sub) << endl;
        }
    }

	return 0;
}


