#include<iostream>
using namespace std;
int main() {
    int i;
    int sum = 0;
    for (i=0; i<=100; i++) {
        if ( i%5==0) continue ;
        cout << i << endl;
    }
    return 0;
}
