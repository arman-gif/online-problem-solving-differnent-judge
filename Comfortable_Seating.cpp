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

        vector<int> a(n);
        int mn = INT_MAX;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            mn = min(mn, a[i]);
        }

        int ans = 0;
        for(int i = 0; i < n; i++)
        {
            if(a[i] == mn)
            {
                ans++;
            }
        }

        if(ans >= 2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

	return 0;
}

