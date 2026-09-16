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

        vector<long long> a(n);
        for(auto &x : a)
        {
            cin >> x;
        }

        sort(a.begin(), a.end());
        long long ans = 0;
        int cnt = 0;

        for(int i = n - 1; i >= 0; i--)
        {
            ans += a[i];
            if(ans >= 0)
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout << cnt << endl;
    }

	return 0;
}

