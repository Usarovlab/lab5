#include <iostream>
using namespace std;

int main() {
    int num;
    int positiveCount = 0, negativeCount = 0, totalCount = 0;
    double sum = 0;

    cout << "Enter integers (0 to stop): " << endl;

    while (true) {
        cin >> num;
        if (num == 0) break; // stop when user enters 0

        sum += num;
        totalCount++;

        if (num > 0)
            positiveCount++;
        else
            negativeCount++;
    }

    if (totalCount == 0) {
        cout << "No numbers were entered (except 0)." << endl;
    } else {
        double average = sum / totalCount;
        cout << "\nNumber of positives = " << positiveCount << endl;
        cout << "Number of negatives = " << negativeCount << endl;
        cout << "Total sum = " << sum << endl;
        cout << "Average = " << average << endl;
    }

    return 0;
}
