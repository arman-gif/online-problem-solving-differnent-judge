#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;

        bool sum[105] = {};
        for(int i = 0; i < m; i++)
        {
            int x;
            cin >> x;
            sum[x] =true;
        }

        for(int j = 0; j < k; j++)
        {
            for(int z = 1; z <= n; z++)
            {
                if(!sum[z])
                {
                    cout << z << " ";
                    sum[z] = true;
                    break;
                }
            }
        }
        cout << endl;
    }

	return 0;
}

