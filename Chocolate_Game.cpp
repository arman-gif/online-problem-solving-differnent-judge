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

        int ans = 0;
        int odd = 0;
        for(int i = 0; i< n; i++)
        {
            int a;
            cin >> a;

            ans = ans + a;
            if(a % 2 == 1)
            {
                odd++;
            }
        }

        int total;
        if(ans % 2 == 0)
        {
            total = ans - odd / 2;
        }
        else
        {
            total = odd / 2;
        }

        cout << total << endl;
    }

	return 0;
}

