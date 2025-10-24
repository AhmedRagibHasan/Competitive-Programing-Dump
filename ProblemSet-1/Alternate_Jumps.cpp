#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        int x_position = n;

        int lilypad_num = 0;

        for (int i = 1; i <= n-1; i++)
        {
            if(i % 2 == 0)
            {
                x_position = x_position +  (n-i);
                
               

            }
            else if(i % 2 != 0)
            {
                
                
                 x_position = x_position -  (n-i);


            }
        }

        cout<<x_position<<'\n';
        
    }
    return 0;
}