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
        int n;

        cin>>n;


        string s;

        cin>>s;

        vector<int> freq(26,0);


        for (int i = 0; i < n; i++)
        {
            if(s[i] >= 'A' && s[i] <= 'Z' )
            {
                s[i] = s[i] - 'A' + 'a';
            }

            freq[s[i] - 'a']++;

        }

        // cout<<s<<"\n";


        sort(freq.begin(),freq.end());


        //  for (int i = 0; i < 26; i++)
        //  {
        //      cout<<freq[i]<<" ";
        //  }

        //  cout<<"\n";

        cout<<freq[26-1]+freq[26-2]<<"\n";

        
        
    }
    return 0;
}