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

        int a[3005];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n - 1; j++)
            {
                if(a[j] > a[j + 1] && (a[j] - a[j + 1]) > 1)
                {
                    int tmp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = tmp;
                }
            }
        }
        for(int i= 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
    }

	return 0;
}

