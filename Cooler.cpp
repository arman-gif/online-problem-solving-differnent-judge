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

        long long sum = n * (n + 1) / 2;
        long long ans = m * (m + 1) / 2;
        long long total = sum - ans;

        cout << total << endl;
    }
    

	return 0;
}

