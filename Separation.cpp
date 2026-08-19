#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, x;
        cin >> n >> x;

        long long mn = INT_MAX;
        long long mx = INT_MIN;
        bool sum = false;

        for(int i = 0; i < n; i++)
        {
            long long a;
            cin >> a;
            mn = min(mn, a);
            mx = max(mx, a);
            if(a == x)
            {
                sum = true;
            }
        }
        if(x <= mn || x >= mx || sum)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

	return 0;
}

