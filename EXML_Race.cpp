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

        vector<long long> d(n), k(n);
        for(int i = 0; i < n; i++)
        {
            cin >> d[i] >> k[i];
        }

        int ans = 0;
        for(int i = 1; i < n; i++)
        {
            if(d[i] * k[ans] > d[ans] * k[i])
            {
                ans = i;
            }
        }

        cout << ans + 1 << endl;
    }

	return 0;
}

