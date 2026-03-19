#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int x,y,z;
        cin >> x >> y >>z ;

        int cnt = 0;


        if(x >= 50)
        {
            cnt++;

        }
        if(y >= 50)
        {
            cnt++;
        }
        if(z >= 50)
        {
            cnt++;
        }

        if(cnt>=2)
        {
            cout<<"Yes"<<"\n";

        }
        else
        {
            cout<<"No"<<"\n";
        }



        
        

        

        
    }
}