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

        vector<int> a(n), b(n);
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        bool ans = true;
        int mx = 0;

        for(int i = 0; i < n; i++)
        {
            if(a[i] > b[i])
            {
                ans = false;
            }
            if(a[i] < b[i] && a[i] <= mx)
            {
                ans = false;
            }
            mx = max(mx, a[i]);
        }
        if(ans)
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

