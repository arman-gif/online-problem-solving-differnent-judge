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

        int freq[26] = {0};
        for(char c : s)
        {
            freq[c - 'a']++;
        }

        bool ans = true;
        for(int i = 0; i < 26; i++)
        {
            if(freq[i] >= 3)
            {
                ans = false;
                break;
            }
        }

        if(ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    

	return 0;
}

