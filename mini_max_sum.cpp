#include<iostream>
using namespace std;
int main()
{
    int a[4];
    for(int i=0;i<=4;i++)
    {
        cin>>a[i];
    }

    int sum = 0;
    int s[4];
       for(int i=0;i<=4;i++)
    {
        sum=0;

        for(int k=0;k<=4;k++)
        {
            if(a[i]==a[k])
            {
                sum=sum;
            }
            else

                sum = sum +a[k];
        }
        s[i]=sum;

    }
    /* for(int i=0;i<=4;i++)
    {
        cout<<s[i]<<' ';
    }
*/


    int max=s[0];
    int min=s[0];
    for(int j=1;j<=4;j++)
    {
        if(max<s[j])
            max=s[j];
        else if(min>s[j])
            min=s[j];
    }
    cout<<min<<' '<<max;
    return 0;
}
