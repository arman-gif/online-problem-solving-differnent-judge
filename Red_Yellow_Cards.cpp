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
        int r, y;
        cin >> r >> y;

        int sum = max(0, y - (r + 1));
        int ans = r + (sum + 1) / 2;
        cout << ans << endl;
    }
    

	return 0;
}


