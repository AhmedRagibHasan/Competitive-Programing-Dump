#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    map<int,int> dmp;

    for (int i = 0; i < n; i++)
    {
        int l,r;
        cin>>l>>r;

        dmp[l]++;
        dmp[r+1]--;
        
    }

    long long int sum = 0;

    // for(auto[key,value] : dmp )
    // {
    //     cout<<key<<" ";
    // }

    // cout<<"\n";


    // for(auto[key,value] : dmp )
    // {
    //     sum += value;
    //     cout<<sum<<" ";
    // }

    bool flag = true;
    
    for(auto[key,value] : dmp )
    {
        sum += value;
        if(sum > 2)
        {
            flag = false;
            break;
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
    
    
    return 0;
}