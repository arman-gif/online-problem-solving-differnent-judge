#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int sum[105];

        for(int i = 1; i <= n; i++)
        {
            cin >> sum[i];
        }
        
        int ans = 1e9;
        for(int i = 1; i <= n; i++)
        {
            for(int j = i + 1; j <= n; j++)
            {
                bool total = true;
                for(int z = 1; z <= n; z++)
                {
                    bool lm = abs(z - i) <= k;
                    bool ln = abs(z - j) <= k;

                    if(!lm && !ln)
                    {
                        total = false;
                        break;
                    }
                }
                if(total)
                {
                    ans = min(ans, sum[i] + sum[j]);
                }
            }
        }
        if(ans == 1e9)
        {
            cout << - 1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

	return 0;
}

