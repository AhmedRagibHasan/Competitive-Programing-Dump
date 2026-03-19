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
        vector<int> a(5);

        for (int i = 0; i < 5; i++)
        {
            cin>>a[i];
        }

        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum +=a[i];
            
            
        }

    

        int bribe = 0;

        if(sum >= 35)
        {
            cout<<0<<"\n";
            continue;
            
        }

        sort(a.begin(),a.end());

        for (int i = 0; i < 5 && sum<35; i++)
        {
            sum += (10 - a[i]);
            bribe +=100;

        }

        cout<<bribe<<"\n";
        


        
        
            
        
    
        
            
        


        
        
    }
    return 0;
}