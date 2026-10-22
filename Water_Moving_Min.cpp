#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for(int &x : a)
        {
            cin >> x;
        }
        sort(a.begin(), a.end());
        int total = max(a[n - 1], a[0] + a[1]);
        cout << total << endl;

    }

	return 0;
}

