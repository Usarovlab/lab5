#include<iostream>
using namespace std;
int main() {
    int i;
    int sum = 0;
    for (i = 0; i <=10; i++) {
cout << "current loop: "<< i << endl;
        sum += i;
    }
    cout << sum << endl;
}
