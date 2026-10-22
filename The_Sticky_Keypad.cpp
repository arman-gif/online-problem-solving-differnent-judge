#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long x;
        int d;
        cin >> x >> d;

        while (true)
        {
           long long tm = x;
           long long pe = 1;
           long long bd = -1;

           while (tm > 0)
           {
             int dg = tm % 10;
             if(dg == d)
             {
                bd = pe;
             }
             tm = tm / 10;
             pe = pe * 10;
           }
           if(bd == -1)
           {
             break;
           }
           x = (x / bd + 1) * bd;
           
        }
        cout << x << endl;
        
    }
    

	return 0;
}

