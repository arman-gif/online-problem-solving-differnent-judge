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
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n), h(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> h[i];
        }

        int l = 0;
        long long ans = 0;
        int total = 0;

        for(int j = 0; j < n; j++)
        {
            if(j > 0 && h[j - 1] % h[j] != 0)
            {
                l = j;
                ans = 0;
            }

            ans = ans + a[j];
            while (ans > k)
            {
                ans = ans - a[l];;
                l++;
            }
            total = max(total, j - l + 1);
        }
        cout << total << endl;
    }
    

	return 0;
}




