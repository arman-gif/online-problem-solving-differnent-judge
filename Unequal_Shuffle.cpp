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
        cin >> n >> a >> b;

        int sum = 0;
        int ans = 0;

        for(int i = 0; i < n; i++)
        {
            if(a[i] == 'a')
            {
                sum++;
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(b[i] == 'b')
            {
                ans++;
            }
        }

        if(sum == ans)
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

