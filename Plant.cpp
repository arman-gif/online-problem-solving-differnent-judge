#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int a[105];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = 0;
        int ans = 0;
        for(int i = 0; i < n - 1; i++)
        {
            ans = min(a[i], a[i + 1]);
            sum = max(sum, ans);
        }
        cout << sum << endl;
    }

	return 0;
}


