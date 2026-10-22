#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, s;
        cin >> n >> s;

        int ans = -1;
        for(int i = 0; i <= n; i++)
        {
            for(int j = 0; i + j <= n; j++)
            {
                if(4 * i - j == s)
                {
                    if(ans == -1 || i + j < ans)
                    {
                        ans = i + j;
                    }
                }
            }
        }
        cout << ans << endl;
    }

	return 0;
}

