#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long w, p, k;
        cin >> w >> p >> k;

        long long sum;
        if(k <= w)
        {
            sum = 2 * k;
        }
        else
        {
            sum = w + k;
        }
        cout << sum << endl;
    }
    

	return 0;
}

