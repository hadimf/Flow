#include <iostream>
using namespace std;

int main() {
    cout<<"Average Number:"<<endl;
    cout<<"Enter Number:"<<endl;
    int number;
    double sum =0;
    int c =-1;
    do {
        cin>>number;
        sum += number;
        c++;
    } while (number !=0);
    cout<<sum/c;
    return 0;
}