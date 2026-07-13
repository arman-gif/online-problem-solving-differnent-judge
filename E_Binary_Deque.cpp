#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        vector<int> a(n);
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }

        if(sum < s)
        {
            cout << - 1 << endl;
            continue;
        }

        int l = 0;
        int ans = 0;
        int len = 0;

        for(int j = 0; j <n; j++)
        {
            ans = ans + a[j];
            while (ans > s)
            {
                ans = ans - a[l];
                l++;
            }
            if(ans == s)
            {
                len = max(len, j - l + 1);
            }
        }
        cout << n - len << endl;
    }

	return 0;
}


