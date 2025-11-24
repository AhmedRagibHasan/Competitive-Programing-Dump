#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--)
    {
        long long int n;

        cin>>n;

        string s;

        cin>>s;

        // cout<<s<<"\n";


        

        int pulse = 0;

        bool silence = false;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == '0' )
            {
                silence = true;
            }
            else if(s[i] == '1' && silence)
            {
                pulse++;
            }
        }

        cout<<pulse<<"\n";
        
    }
    return 0;
}