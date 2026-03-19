#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;

    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;

        vector<long long int> dolls(n);

        for (int i = 0; i < n; i++)
        {
            cin>>dolls[i];
        }
        

        map<long long int,long long int> freqmp;

        for(auto val : dolls)
        {

            freqmp[val]++;

        }

        long long int maxsets = 0;


        for(auto val : freqmp)
        {
            if(val.second > 1)
            {
                maxsets++;
            }
            
        }

        cout<<maxsets<<"\n";
        
    }
    
    return 0;
}