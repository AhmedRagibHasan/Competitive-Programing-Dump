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

        int cnt = 0;

        

        for (int l = 0,r=n-1; l<r; l++,r--)
        {
             if(s[l] == '0' && s[r] == '1' || s[l] == '1' && s[r] == '0'  )
             {
                cnt += 2;


             }
             else
             {
                break;
             }
        }

        cout<<s.size() - cnt<<"\n";
        
    }
    return 0;
}