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
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long l = 0;
        long long r = 1e18;
        bool ans = true;

        for(int i = 0; i< n / 2; i++)
        {
            long long u = a[i];
            long long v = a[n - 1 - i];
            long long x = v - u;

            if(x == 0)
            {
                continue;
            }

            if(abs(x) != 2)
            {
                ans = false;
                break;
            }

            long long sm = min(u, v);
            long long bg = max(u, v);

            l = max(l, sm + 1);
            r = min(r, bg);

        }
        if(ans && l <= r)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }


	return 0;
}

