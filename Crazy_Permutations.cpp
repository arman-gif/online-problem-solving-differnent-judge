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

        bool sm = true;
        for(int i = 1; i < n; i++)
        {
            bool ans = (a[i] > a[i - 1]);
            bool sum = (b[i] > b[i - 1]);

            if(ans != sum)
            {
                sm = false;
                break;
            }
        }
        if(sm)
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

