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

        vector<long long> ans(n + 1, 0);
        for(int i = 1; i <= n; i++)
        {
            long long x;
            cin >> x;
            ans[i] = ans[i - 1] + x;
        }

        string s;
        cin >> s;

        long long sum = 0;
        int l = 0;
        int r = n - 1;
        
        while (l < r)
        {
            while (l < n && s[l] != 'L')
            {
                l++;
            }
            
            while (r >= 0 && s[r] != 'R')
            {
                r--;
            }

            if(l < r)
            {
                sum += ans[r + 1] - ans[l];
                l++;
                r--;
            }
            else
            {
                break;
            }
        }
        cout << sum << endl;
    }
    

	return 0;
}

