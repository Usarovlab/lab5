#include <iostream>
using namespace std;
int main() {
    int i;
    int n;
 cin >> n;
    for ( i=0; i<=n; i++) {

        if (n%i == 0) {
            cout<<" divisible by "<<i<<endl;
        }

    }
    return 0;
}
