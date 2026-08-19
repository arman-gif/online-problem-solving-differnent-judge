#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;

        int sum = 0;
        int ans = 0;

        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == 'a')
            {
                sum++;
            }
            else
            {
                ans++;
            }
        }
        cout << sum << " " << ans << endl;
    }

	return 0;
}


