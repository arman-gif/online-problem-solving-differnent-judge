#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l, r;
    cin >> l >> r;

    if(l == r)
    {
        if(l % 2 == 0)
        {
            cout << "Yes";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "Yes";
    }

	return 0;
}

