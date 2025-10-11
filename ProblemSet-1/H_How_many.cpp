#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int S,T;

    cin>>S>>T;

    int cnt = 0;
    

    for (int i = 0; i <= S; i++)
    {
        for (int j = 0; j <= S; j++)
        {
            for (int k = 0; k <= S; k++)
            {
                if(i+j+k <= S && i*j*k <= T)
                {
                    cnt++;
                }
              
                
                
            }
            
        }
        
    }

    cout<<cnt<<'\n';
    
    return 0;
}