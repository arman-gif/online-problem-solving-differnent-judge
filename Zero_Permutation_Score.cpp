#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        long long rm = n - 1;
        long long ans = 0;

        for(long long i = 1; i < n; i += 2)
        {
            rm = rm - 2;
            if(rm < 0)
            {
                rm = 0;
            }
            ans = ans + rm;
        }
        cout << ans << endl;
    }

	return 0;
}
