#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        string s;

        cin >> n >> k;
        cin >> s;

        int ans = 0;
        for(int i = 0; i < n; i += k)
        {
            bool sum = false;
            for(int j = i; j < i + k; j++)
            {
                if(s[j] == '0')
                {
                    sum = true;
                    break;
                }
            }
            if(!sum)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }

	return 0;
}

