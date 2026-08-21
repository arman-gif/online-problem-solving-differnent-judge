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

        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int cnt[n + 1] = {0};
        for(int i = 0; i < n; i++)
        {
            cnt[a[i]]++;
        }

        int ans  = 1;
        int sum = cnt[1];
        for(int j = 2; j <= n; j++)
        {
            if(cnt[j] > sum)
            {
                sum = cnt[j];
                ans = j;
            }
        }

        cout << ans << endl;

    }

	return 0;
}

