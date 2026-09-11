#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long sum = n - 2;
        long long ans = (n - 1) * (n - 2) / 2;

        cout << sum << " " << ans << endl;
    }

	return 0;
}

