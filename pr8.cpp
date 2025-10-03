#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Digits in reverse order: ";

    while (n > 0) {
        cout << n % 10;
        n /= 10;
    }

    cout << endl;
    return 0;
}
