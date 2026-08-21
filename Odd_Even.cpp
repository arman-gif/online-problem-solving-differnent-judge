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

        int odd = 0;
        int even = 0;

        for(int i = 0; i < n; i++)
        {
            int k;
            cin >> k;

            if(k % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        int sum = 2 * min(odd, even);

        if(odd != even)
        {
            sum++;
        }

        cout << sum << endl;
    }
    

	return 0;
}

