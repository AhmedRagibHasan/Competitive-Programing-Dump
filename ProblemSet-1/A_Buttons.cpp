#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;

    int btn1 = a + (a-1);
    int btn2 = b + (b-1);

    int opt1 = max(btn1,btn2);

    int opt2 = a + b;

    cout<<max(opt1,opt2);


    return 0;
}