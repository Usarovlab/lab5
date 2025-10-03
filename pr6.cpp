#include<iostream>
using namespace std;
int main(int argc, char const *argv[]) {
    // totalGPA=sum(credits*grade)/sum(credits)
    int n;
    cin>>n;
    float credit, grade;
    float sumCrGr=0;
    float sumCredits=0;
    for ( int i=0; i<n; i++ ) {
        cin>>credit>>grade;
        sumCrGr+=(credit*grade);
        sumCredits+=credit;
    }
   float gpa=sumCrGr/sumCredits;
    cout << gpa << endl;
    return 0;
}
