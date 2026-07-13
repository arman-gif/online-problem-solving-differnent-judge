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
        string s;
        cin >> s;

        auto total = vector(n, vector<bool>(n, 0));
        for(int i = 2; i <= n; i++)
        {
            for(int j = 0; j + i - 1 < n; j++)
            {
                int r = j + i - 1;
                for(int k = j + 1; k <= r; k++)
                {
                    if(s[j] == s[k])
                    {
                        bool ans = 1;
                        bool sum = 1;

                        if(k > j + 1)
                        {
                            ans = total[j + 1][k - 1];
                        }
                        if(k < r)
                        {
                            sum = total[k + 1][r];
                        }
                        if(ans && sum)
                        {
                            total[j][r] = 1;
                            break;
                        }
                    }
                }
            }
        }
        if(total[0][n - 1])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

	return 0;
}


