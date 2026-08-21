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

        int ans = n - 1;
        while (ans >= 0 && a[ans] == ans + 1)
        {
            ans--;
        }

        if(ans < 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << a[ans] << endl;
        }


    }

	return 0;
}

