#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n, a;
        cin >> n >> a;

        long long sum = n - a;
        long long ans = 0;
        if(sum > 0)
        {
            ans = sum * (sum + 1) / 2;
        }
        cout << ans << endl;
    }
    

	return 0;
}


