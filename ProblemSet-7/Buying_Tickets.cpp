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
        int n,k;


        cin>>n>>k;


        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }


        string s;

        cin>>s;


        vector<int> b;


        for (int i = 0; i < n; i++)
        {
         if(s[i] == '0' )
         {
            b.push_back(a[i]);
         }
        }


        if(b.size() < k )
        {
            cout<<-1<<"\n";
            continue; 
        }
        

        sort(b.begin(),b.end());


        int sum = 0 ;

        for (int i = 0; i < k; i++)
        {
            sum += b[i];
        }

        cout<<sum<<"\n";
        
        



        
    }
    
    return 0;
}