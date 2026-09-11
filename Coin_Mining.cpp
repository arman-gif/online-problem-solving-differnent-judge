#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        for(int i = 1; i <= 201; i++)
        {
            bool sum = false;
            for(int j = 1; j <= i; j++)
            {
                long long ans = j * (j + 1) * (2 * j + 1) / 6;
                long long total = y * (ans + (i - j) * j * j);
                long long cnt = j * x;

                if(total > cnt)
                {
                    cout << i << endl;
                    sum = true;
                    break;
                }
            }
            if(sum)
            {
                break;
            }
        }
    }

	return 0;
}

