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

        string s;
        cin >> s;

        for(int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }

        int freq[26] = {0};
        for(int i = 0; i < s.length(); i++)
        {
            int sum = s[i] - 'a';
            freq[sum]++;
        }

        int mx1 = 0;
        int mx2 = 0;

        for(int i = 0; i < 26; i++)
        {
            if(freq[i] > mx1)
            {
                mx2 = mx1;
                mx1 = freq[i];
            }
            else if(freq[i] > mx2)
            {
                mx2 = freq[i];
            }
        }
        int ans = mx1 + mx2;
        cout << ans << endl;
    }

	return 0;
}

