#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        if(a == b)
        {
            long long sum = a + b -1;
            cout << sum << endl;
        }
        else
        {
            long long ans = a + b;
            cout << ans << endl;
        }
    }
    

	return 0;
}

