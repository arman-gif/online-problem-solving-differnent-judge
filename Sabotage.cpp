#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, x, k;
        cin >> n >> x >> k;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        for(int i = 0; i < k; i++)
        {
            a[n - 1 - i] = 0;
        }

        x += 100 * k;
        int ans = 1;
        for(int i = 0; i < n; i++)
        {
            if(a[i] > x)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

	return 0;
}

