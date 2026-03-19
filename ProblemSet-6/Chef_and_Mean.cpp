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
        long long n;
        cin>>n;

        vector<long long int> a(n);

        long long int sum = 0;

        for (long long int i = 0; i < n; i++)
        {
            cin>>a[i];

            sum += a[i];


        }

        double mean = (double)sum/n;


        bool flag = false;

        long long ans;

        for (int i = 0; i < n; i++)
        {
            if(mean == (double)a[i])
            {
                // cout<<"so mean is "<<fixed << setprecision(1)<< mean<<" and a[i] is "<<a[i]<<" ";
                flag = true;
                ans = i + 1;

                break;
                
            }
        }

        if(flag)
        {
            cout<<ans<<"\n";
        }
        else
        {
            cout<<"Impossible"<<"\n";
        }
        
        


    }
    return 0;
}