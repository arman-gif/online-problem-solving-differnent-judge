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

        int x = 0, y = 0;

        for(char c : s)
        {
            if(c == 'U')
            {
                y++;
            }
            else if(c == 'D')
            {
                y--;
            }
            else if(c == 'L')
            {
                x--;
            }
            else if(c == 'R')
            {
                x++;
            }
        }

        bool ans = false;
        for(char c : s)
        {
            int nx = x, ny = y;
            if(c == 'U')
            {
                ny -= 2;
            }
            else if(c == 'D')
            {
                ny += 2;
            }
            else if(c == 'L')
            {
                nx += 2;
            }
            else if(c == 'R')
            {
                nx -= 2;
            }

            if(nx == 0 && ny == 0)
            {
                ans = true;
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

