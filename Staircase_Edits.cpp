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

        map<int, int> ans;
        int mx = 0;

        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;

            int sum = x - i;
            ans[sum]++;
            mx = max(mx, ans[sum]);
        }
        cout << n - mx << endl;
    }

	return 0;
}


