#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n), b(m);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int j = 0; j < m; j++)
        {
            cin >> b[j];
        }

        long long ans = 0;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(a[i] > b[j])
                {
                    ans++;
                }
            }
        }
        cout << ans << endl;
    }

	return 0;
}

