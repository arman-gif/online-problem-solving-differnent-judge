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

        string s, l;
        cin >> s >> l;

        int left[26] = {0};
        for(int i = 0; i < m; i++)
        {
            left[l[i] - 'a'] = 1;
        }

        int cnt = 1;
        int ans = 1;

        for(int i = 1; i < n; i++)
        {
            if(left[s[i] - 'a'] == left[s[i - 1] - 'a'])
            {
                cnt++;
            }
            else
            {
                cnt = 1;
            }

            if(cnt > ans)
            {
                ans = cnt;
            }
        }
        cout << ans << endl;
    }

	return 0;
}

