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
        int n,k;
        cin >> n >>k;

        vector<int> b(n+1);
        

        for(int i = 1; i <= n; i++)
        {
            cin >> b[i];
            
        }


        int pos1 = -1000;

        bool flag = true;

        bool one = false;


        
        for(int i = 1; i <= n; i++)
        {
            if(b[i] == 1)
            {
                one = true;

                if(i - pos1 <= k)
                {
                    flag = false;
                    break;
                }

                pos1 = i;
            }
            
        }


        if(flag) 
        {
            for(int i = 1; i <= n; i++)
            {
                if(b[i] == 0)
                {
                    bool zero = false;
                    
                    for(int j = max(1, i - k); j <= min(n, i + k); j++)
                    {
                        if(b[j] == 1)
                        {
                            zero = true;
                            break;
                        }
                    }
                    if(!zero)
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }

        if(!one)
        {
            flag = false;
        }

        if(flag)
        {
            cout<<"Yes"<<"\n";
        }
        else
        {
            cout<<"No"<<"\n";
        }




        
    }
}