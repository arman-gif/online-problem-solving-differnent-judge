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

        vector<long long> a(n);
        for(auto &x : a)
        {
            cin >> x;
        }

        vector<pair<int, int>> b(n);
        for(int i = 0; i < n; i++)
        {
            b[i] = {a[i], i};
        }

        sort(b.begin(), b.end());
        vector<long long> ans(n, -1);

        for(int i = 1; i < n - 1; i++)
        {
            long long x = b[i].first;
            int total = b[i].second;
            long long l = b[i - 1].first;
            long long r = b[i + 1].first;

            long long sm = (x + l + 2) / 2;
            long long as = (x + r) / 2;

            ans[total] = as - sm + 1;
        }
        
        for(int i = 0; i < n; i++)
        {
            cout << ans[i];
            if(i != n - 1)
            {
                cout << " ";
            }
            else
            {
                cout << endl;
            }
        }

    }
    

	return 0;
}

