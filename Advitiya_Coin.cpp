#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        long long k;
        cin >> n >> k;

        long long ans[100005];
        for(int i = 0; i < n; i++)
        {
            cin >> ans[i];
        }

        long long cnt = 0;
        long long mn = 1e18;
        long long mx = -1e18;

        for(int i = 0; i < n; i++)
        {
            if(ans[i] < mn)
            {
                mn = ans[i];
            }

            if(ans[i] > mx)
            {
                mx = ans[i];
            }

            long long sum = mx - mn - k;
            if(sum > 0)
            {
                cnt++;
                mn = 1e18;
                mx = -1e18;
            }
        }
        cout << cnt << endl;
    }
    

	return 0;
}

