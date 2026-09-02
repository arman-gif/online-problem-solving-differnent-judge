#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b, p, q, r;
        cin >> a >> b >> p >> q >> r;

        int ans = 1e9;
        int sum[105][105];

        for(int i = 0; i <= a; i++)
        {
            for(int j = 0; j <= b; j++)
            {
                sum[i][j] = ans;
            }
        }
        sum[0][0] = 0;
        for(int j = 0; j <= a; j++)
        {
            for(int k = 0; k <= b; k++)
            {
                if(j + 1 <= a)
                {
                    sum[j + 1][k] = min(sum[j + 1][k], sum[j][k] + p);
                }
                if(j + 2 <= a)
                {
                    sum[j + 2][k] = min(sum[j + 2][k], sum[j][k] + p);
                }

                if(k + 1 <= b)
                {
                    sum[j][k + 1] = min(sum[j][k + 1], sum[j][k] + q);
                }

                if(k + 2 <= b)
                {
                    sum[j][k + 2] = min(sum[j][k + 2], sum[j][k] + q);
                }

                if(j + 1 <= a && k + 1 <= b)
                {
                    sum[j + 1][k + 1] = min(sum[j + 1][k + 1], sum[j][k] + r);
                }
            }

        }
        cout << sum[a][b] << endl;
    }
    

	return 0;
}

