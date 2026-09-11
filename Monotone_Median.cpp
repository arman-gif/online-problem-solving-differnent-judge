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

        vector<int> ps(n + 1);
        for(int i = 1; i <= n; i++)
        {
            int x;
            cin >> x;
            ps[x] = i;
        }

        int k = (n + 1) / 2;
        vector<int> l(k + 1), h(k + 1);
        int mn = n + 1;
        int mx = 0;

        bool nm = true;
        for(int i = 1; i <= k; i++)
        {
            mn = min(mn, ps[i]);
            mx = max(mx, ps[i]);

            int ln = 2 * i - 1;
            int lm = max(1, mx - ln + 1);
            int rm = min(mn, n - ln + 1);

            if(i > 1)
            {
                lm = max(lm, l[i - 1] - 2);
                rm = min(rm, h[i - 1]);
            }

            if(lm > rm)
            {
                nm = false;
                break;
            }

            l[i] = lm;
            h[i] = rm;
        }
        if(!nm)
        {
            cout << - 1 << endl;
            continue;
        }

        vector<int> asl(k + 1), anr(k + 1);
        asl[k] = 1;
        anr[k] = n;

        for(int i = k - 1; i >= 1; i--)
        {
            int lm = max(l[i], asl[i + 1]);
            int rm = min(h[i], asl[i + 1] + 2);

            asl[i] = lm;
            anr[i] = lm + 2 * i - 2;
        }

        for(int i = 1; i <= k; i++)
        {
            cout << asl[i] << ' ' << anr[i] << endl;
        }
    }
    

	return 0;
}

