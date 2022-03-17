#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n;i++)
    {
        cin>>a[i];
    }
    int s=0;
    int count=0;
    for(int i=0;i<n;i++)
    {
        count=0;
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
                count++;
        }
        if(count==1)
        {
            s=a[i];
            break;


        }
    }
    cout<<s;

    return 0;


}


