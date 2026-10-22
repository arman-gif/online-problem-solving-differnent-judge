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

        bool total = false;
        for(int j = 0; j < n; j++)
        {
            int sum = 0;
            bool sm = true;

            for(int i = 0; i < n; i++)
            {
                if(i == j)
                {
                    continue;
                }
                sum += a[i];
                if(sum < 0)
                {
                    sm= false;
                    break;
                }
            }
            if(sm)
            {
                total  = true;
                break;
            }
        }
        if(total)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

	return 0;
}

