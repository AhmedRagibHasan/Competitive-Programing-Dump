#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    while (q--)
    {
        int n;
        cin>>n;

        string s,t;

        cin>>s>>t;

        vector<int> freqs(26);

        vector<int> freqt(26);

        for (int i = 0; i < 26; i++)
        {
            freqs[i] = 0;
            freqt[i] = 0;

        }
        


        

        for (int i = 0; i < n; i++)
        {

            int idxs =  s[i] - 'a' ;

            int idxt =  t[i] - 'a' ;


            freqs[idxs]++;
            freqt[idxt]++;

            
            
        }

        bool flag = true;

        for (int i = 0; i < 26; i++)
        {
            if(freqs[i] != freqt[i])
            {
                flag = false;

            }
            
        }
        

        if(flag)
        {
            cout<<"YES"<<"\n";
            
        }
        else
        {
            cout<<"NO"<<"\n";

        }
        
    }
        return 0;
}