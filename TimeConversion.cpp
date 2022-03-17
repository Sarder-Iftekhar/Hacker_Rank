#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string hh=s.substr(0,2);
    string last=s.substr(3,5);
    int h=stoi(hh);
    if(s[8]=='A')
    {

        if(h==12)
        {
            string x="00";


            cout<<x<<':'<<last;
        }
        else
            cout<<s.substr(0,8);
    }
    else if(s[8]=='P')
    {

        if(h==12)
        {
            string ss=s.substr(0,8);

            cout<<ss;
        }
        else
        {
            h=h+12;
          cout<<h<<':'<<last;

        }


    }
    else
    {

        cout<<h<<':'<<last;
    }



    return 0;

}
