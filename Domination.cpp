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

        vector<vector<int>> sum(n + 1);
        for(int i = 0; i < n - 1; i++)
        {
            int u, v;
            cin >> u >> v;
            sum[u].push_back(v);
            sum[v].push_back(u);
        }

        long long total = 1LL * n * (n - 1) * (n - 2) / 6;
        int ans = 0;

        vector<int> an(n + 1, 0);
        for(int v = 1; v <= n; v++)
        {
            if(sum[v].size() == 1)
            {
                ans++;
            }
        }

        for(int v = 1; v <= n; v++)
        {
            for(int u : sum[v])
            {
                if(sum[u].size() == 1)
                {
                    an[v]++;
                }
            }
        }

        long long bd = 1LL * ans * (n - 2);
        for(int v = 1; v <= n; v++)
        {
            bd -= 1LL * an[v] * (an[v] - 1) / 2;
        }

        for(int v = 1; v <= n; v++)
        {
            if(sum[v].size() == 2)
            {
                bool tot = false;
                for(int u : sum[v])
                {
                    if(sum[u].size() == 1)
                    {
                        tot = true;
                    }
                }
                if(!tot)
                {
                    bd++;
                }
            }
        }
        cout << total - bd << endl;
    }
    

	return 0;
}

