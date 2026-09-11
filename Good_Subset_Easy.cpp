#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int cnt[31] = {0};
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            int sum = 0;
            while (x > 1)
            {
                x /= 2;
                sum++;
            }

            cnt[sum]++;
            ans = max(ans, cnt[sum]);
        }
        cout << ans << endl;
    }

	return 0;
}


