// DiagonalSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[100][100];
    for (int i = 0;i <= n;i++)
    {
        for(int j = 0;j <= n;j++)
        {
            cin >> a[i][j];


        }

    }
    int sum = 0;
    int sum1 = 0;
    for (int i = 0;i <= n;i++)
    {
        for (int j = 0;j <= n;j++)
        {
            if (i = j)
            {
                sum = sum + a[i][j];

            }
            if ( i = -j)
            {
                sum1 = sum1 + a[i][j];

            }
            


        }

    }
    cout << abs(sum - sum1);




}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
