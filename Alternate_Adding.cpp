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

        vector<long long> a(n + 2, 0);
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if(i % 2 == 0)
            {
                a[i] = -a[i];
            }
        }

        long long sum = 0;
        for(int i = 1; i <= n + 1; i++)
        {
            long long total = a[i] - a[i - 1];
            if(total > 0)
            {
                sum += total;
            }
        }
        cout << sum << endl;
    }

	return 0;
}

