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

        int od = 0, a = 0, b = 0;
        for(int i = 0; i < n; i++)
        {
            long long x;
            cin >> x;

            if(x % 2)
            {
                od++;
            }
            else if(x % 4 == 0)
            {
                a++;
            }
            else
            {
                b++;
            }
        }
        int ans = max({od, a, b});
        cout << ans << endl;
    }

	return 0;
}

