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

        vector<long long> a(n);
        long long tal = 0;

        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            tal = tal + a[i];
        }

        sort(a.begin(), a.end());
        vector<long long> pfx(n + 1, 0);

        for(int i = 0; i < n; i++)
        {
            pfx[i + 1] = pfx[i] + a[i];
        }

        long long ans = 0;
        for(int j = 1; j < n; j++)
        {
            long long sum;
            if(j <= n / 2)
            {
                sum = tal - pfx[n - j];
            }
            else
            {
                sum = pfx[j];
            }

            long long mn = tal - sum;
            long long mt = n - j;
            long long total = sum * mt + mn * j;

            ans = max(ans, total);
        }
        cout << ans << endl;

    }

	return 0;
}

