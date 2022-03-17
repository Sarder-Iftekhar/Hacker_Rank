#include <iostream>
using namespace std;

int main() {

   int n;
   long long int sum = 0;
   long long int a;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a;
        sum+=a;
    }
    cout << sum << endl;
    return 0;
}

