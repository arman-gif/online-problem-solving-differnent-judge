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

        int sum[4] = {0, 0, 0, 0};
        for(int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            sum[k]++;
        }
        int ans = min(sum[1], sum[3]);
        int total = max(0, sum[2] - 1);
        int cnt = (ans + total);

        cout << cnt << endl;
    }

	return 0;
}

