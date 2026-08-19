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

        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<int> sum(n + 1);
        sum[1] = 0;
        int ans = sum[1] + 1;
        int total = 0;

        for(int i = 2; i <= n; i++)
        {
            sum[i] = a[i] - i + ans;
            total = max(total, sum[i]);
            ans = max(ans, sum[i] + i);
        }
        cout << total << endl;
    }
    

	return 0;
}


