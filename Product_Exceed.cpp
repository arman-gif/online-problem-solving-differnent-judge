#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, p;
        cin >> x >> y >> p;

        if(x * y >= p)
        {
            cout << 0 << endl;
            continue;
        }

        int sum = 1e9;
        for(int i = 0; i <= 100; i++)
        {
            for(int j = 0; j <= 100; j++)
            {
                if((x + i) * (y + j) >= p)
                {
                    sum = min(sum, i + j);
                }
            }
        }
        cout << sum << endl;
    }

	return 0;
}



