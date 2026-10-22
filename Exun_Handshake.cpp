#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        long long m;
        cin >> n >> m;

        vector<int> a(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        long long ans = 0;
        int cnt = 0;

        for(int i = 0; i < n; i++)
        {
            long long sum = ans + a[i];
            if(sum * (sum - 1) / 2 <= m)
            {
                ans = sum;
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

