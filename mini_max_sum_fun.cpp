
#include<iostream>
#include<algorithm>>
using namespace std;
int main()
{
    long a[4];
    long result1=0;
    long result2=0;

    for(int i=0;i<=4;i++)
    {
        cin>>a[i];

    }
    long min=*min_element(a,a+5);
    long max=*max_element(a,a+5);

    sort(a,a+4);
     for(int i=0;i<=4;i++)
    {

        result1=result1+a[i];
        result2=result2+a[i];
    }
    cout<<result1-max<<' '<<result2-min;
    return 0;
}


