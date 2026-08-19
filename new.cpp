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

        int sum = 1;
        long long ans = 0;

        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;

            if(x == sum)
            {
                ans++;
                sum = 1;
            }
            else if(x == 1)
            {
                sum = 2;
            }
            else if(x == sum)
            {
                sum++;
            }
        }
        cout << ans << endl;
    }

	return 0;
}

