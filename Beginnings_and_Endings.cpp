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
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum[101];
        int ans[101];
        for(int i = 0; i <= 100; i++)
        {
            sum[i] = -1;
            ans[i] = -1;
        }

        for(int i = 0; i < n; i++)
        {
            if(sum[a[i]] == -1)
            {
                sum[a[i]] = i;
            }
            ans[a[i]] = i;
        }

        int total = 1e9;
        for(int j = 1; j <= 100; j++)
        {
            if(sum[j] != -1 && sum[j] < ans[j])
            {
                int ct = sum[j] + (n - 1 - ans[j]);
                total = min(total, ct);
            }
        }

        if(total == 1e9)
        {
            cout << - 1 << endl;
        }
        else
        {
            cout << total << endl;
        }
    }
    

	return 0;
}



