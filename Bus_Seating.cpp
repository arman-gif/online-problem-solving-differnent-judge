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

        int sum = k - n;
        if(k <= n)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 2 * sum << endl;
        }
    }

	return 0;
}

