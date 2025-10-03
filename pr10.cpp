#include <iostream>
using namespace std;

int main() {
    int num, maxNum = -999999; // start with very small number

    cout << "Enter integers : " << endl;

    while (true) {
        cin >> num;
        if (num == 0) break; // stop if user enters 0
        if (num > maxNum) {
            maxNum = num;
        }
    }

    if (maxNum == -999999)
        cout << "No numbers were entered." << endl;
    else
        cout << "Maximum number  = " << maxNum << endl;

    return 0;
}
