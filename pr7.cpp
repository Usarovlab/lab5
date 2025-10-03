#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    int n;
    cin>>n;
    int remainder=0;
    for ( int i=2; i<n; i++) {
        remainder=n%1;
        if (remainder==0) {
            cout<<"number is not a prime"<<endl;
            break;
        }
    }
    if (remainder!=0) {
        cout<<"number is a prime ";
    }
return 0;
}
