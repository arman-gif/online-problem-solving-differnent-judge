#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string a, b;

        cin >> n;
        cin >> a >> b;

        int ans1 = 0, ans2 = 0;
        for(char c : a)
        {
            if(c == '1')
            {
                ans1++;
            }
        }

        for(char c : b)
        {
            if(c == '1')
            {
                ans2++;
            }
        }

        if(ans1 % 2 == ans2 % 2)
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

