#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    //Problem D separation

    while (t--)
    {
        int n,x;

        cin>>n>>x;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        sort(a.begin(),a.end());

        int l = 0 ;

        bool noflag = false;

        while(l+1<n)
        {
            if(a[l] < x && a[l+1] > x || a[l] > x && a[l+1] < x )
            {
                
                noflag = true;
                break;


            }
            l++;
            
        }

        if(noflag)
        {
            cout<<"No"<<"\n";
        }
        else
        {
            cout<<"Yes"<<"\n";

        }
    }
    

    return 0;
}