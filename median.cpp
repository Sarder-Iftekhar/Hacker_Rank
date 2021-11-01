#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int x;
    if(n%2==0)
    {
         x = (n/2)-1;
         cout<<a[x];


    }
    else
    {
        x = (n/2);
        cout<<a[x];

    }



    return 0;

}
