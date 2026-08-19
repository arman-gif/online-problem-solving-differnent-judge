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
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i<n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;
        int ans = 0;
        int total = 0;

        for(int i = 0; i < n; i++)
        {
            if(i % 2 == 0)
            {
                if(a[i] % 2 == 0)
                {
                    sum++;
                }
                else
                {
                    ans++;
                }
            }
            else
            {
                if(a[i] % 2 == 1)
                {
                    sum++;
                }
                else
                {
                    ans++;
                }
            }
        }
        total = min(sum, ans);
        cout << total << endl;
    }

	return 0;
}


