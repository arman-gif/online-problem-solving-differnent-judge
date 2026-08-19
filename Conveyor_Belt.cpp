#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

	int t;
    cin >> t;

    while (t--)
    {
        int n, p;
        cin >> n >> p;

        string s;
        cin >> s;

        int sum = 0;
        int ans = 0;

        for(int i = 0; i < p; i++)
        {
            if(s[i] == 'R')
            {
                sum++;
            }
        }

        for(int i = p - 1; i < n; i++)
        {
            if(s[i] == 'L')
            {
                ans++;
            }
        }
        int total = min(sum, ans);
        cout << total << endl;
    }

	return 0;
}




