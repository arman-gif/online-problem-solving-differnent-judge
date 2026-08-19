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

        vector<int> p(n + 1);
        vector<int> q(n + 1);
        vector<bool> r(n + 1, true);

        for(int i = 1; i <= n; i++)
        {
            cin >> p[i];
            q[p[i]] = i;
        }

        long long ans = 0;
        for(int j = n; j >= 1; j--)
        {
            int m = q[j];
            int left = 0;
            int right = 0;

            for(int i = 1; i < m; i++)
            {
                if(r[i])
                {
                    left++;
                }

            }

            for(int i = m + 1; i <= n; i++)
            {
                if(r[i])
                {
                    right++;
                }
            }

            ans = ans + min(left, right);
            r[m] = false;
        }
        cout << ans << endl;
    }
    

	return 0;
}

