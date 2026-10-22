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

        vector<int> a(n);
        vector<int> ans(n + 2, 0);

        for(int &x : a)
        {
            cin >> x;
            if(x <= n + 1)
            {
                ans[x]++;
            }
        }

        int sum = 0;
        while (ans[sum] > 0)
        {
            sum++;
        }
        long long total = 0;
        for(int x = 0; x < sum; x++)
        {
            total += 1LL * x * (ans[x] - 1);
        }

        for(int x : a)
        {
            if(x > sum + 1)
            {
                total += x - (sum + 1);
            }
        }
        if(total % 2)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

	return 0;
}

