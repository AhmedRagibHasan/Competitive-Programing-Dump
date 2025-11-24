#include <bits/stdc++.h>
using namespace std;

//

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {

        long long int a_milk, b_dark;

        cin >> a_milk >> b_dark;

        

        

        long long int sat = 0;

        
        
            if (a_milk > b_dark)
            {
                sat = a_milk + b_dark;
            }
            else if (a_milk < b_dark)
            {
                sat = a_milk + b_dark;
                
            }
            else if (a_milk == b_dark)
            {
                sat = a_milk + b_dark -1;
            }
        

        cout << sat << '\n';
    }

    return 0;
}