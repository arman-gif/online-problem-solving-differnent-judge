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
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        map<int, int> cnt;
        int sum = 0;
        for(int i = 0; i < n; i++)
        {
            cnt[a[i]]++;
            sum = max(sum, cnt[a[i]]);
        }
        int total = n - sum + 1;
        cout << total << endl;
    }

	return 0;
}

