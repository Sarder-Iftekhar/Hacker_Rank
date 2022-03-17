#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  int c1=0;
 int  c2=0;
 int c3=0;
  cin >> N;
  int a[N];

  for (int i = 0; i < N; i++)
  {
      cin>>a[i];
      if(a[i]>0)
      {
         c1++;
      }
       else if(a[i]<0)
      {
         c2++;
      }
      else
      {
          c3++;
      }

  }
    cout<<setprecision(6)<<(float)c1/N<<endl;
        cout<<setprecision(6)<<(float)c2/N<<endl;
        cout<<setprecision(6)<<(float)c3/N<<endl;

  return 0;
}

