#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<long long int> a(n);

        long long frndout = 0;


        for (int i = 0; i < n; i++)
        {
            cin >> a[i];


        }


        vector<long long int> hits(n);


        for (int i = 0; i < n; i++)
        {
            hits[i] = min(a[i], frndout);

            if(a[i] > frndout)
            {
                frndout++;
            }
            
        }



        for (int i = 0; i < n; i++)
        {
            cout << hits[i]<<" " ;


        }


        cout<<"\n";
        
            
        

        
    }

    return 0;
}