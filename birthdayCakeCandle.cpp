#include <bits/stdc++.h>
using namespace std;

int main() {
    int max=0;
    int count=0;

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];

    }
    max=*max_element(a,a+n);

     for(int i=0;i<n;i++)
    {
        if( max==a[i])
        {
            count++;
        }

    }

    cout<<count;

    return 0;

}

