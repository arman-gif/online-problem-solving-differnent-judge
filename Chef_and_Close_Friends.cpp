#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y, z;
        cin >> x >> y >> z;

        int ans = 2 * min(y, z);
        cout << ans << endl;
    }

	return 0;
}

