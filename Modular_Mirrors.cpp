#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;

        if((n + 1) % 3 != 0)
        {
            cout << - 1 << endl;
            continue;
        }

        vector<long long> a(n + 1);
        a[0] = 0;
        a[1] = 1;
        
        for(int i = 2; i <= n; i++)
        {
            a[i] = ((a[i - 1] - a[i - 2]) % m + m) % m;
        }

        for(int i = 1; i <= n; i++)
        {
            cout << a[i];
            if(i < n)
            {
                cout << ' ';
            }
            else
            {
                cout << endl;
            }
        }
    }
    

	return 0;
}

