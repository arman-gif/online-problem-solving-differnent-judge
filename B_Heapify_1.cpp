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

        vector<int> a(n + 1);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        vector<vector<int>> k(n + 1);
        for(int i = 1; 2 * i <= n; i++)
        {
            k[i].push_back(2 * i);
            k[2 * i].push_back(i);
        }

        vector<int> sum(n + 1, 0);
        bool ans = 1;

        for(int i = 1; i <= n )
    }
    

	return 0;
}


