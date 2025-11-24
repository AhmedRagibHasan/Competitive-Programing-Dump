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
        int n,x;

        cin>>n>>x;

        string s;

        cin>>s;

        int swip = 0;

        bool flag = true;

        for (int i = 0; i < n; i++)
        {
            if(s[i] == '0' && swip == 0)
            {
                flag = false;
                

            }
            else if(s[i] == '1')
            {
                swip += x;
            }
        }

        if(flag)
        {
            cout<<"YES"<<'\n';

        }
        else
        {
            cout<<"NO"<<'\n';
        }


 
            
        
        
            

        
        

        
        

        
    }

    
    return 0;
}