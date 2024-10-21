#include <iostream>
using namespace std;

int main() {
    cout<<"Absolute Number:"<<endl;
    cout<<"Enter Number:"<<endl;
    int number;
    cin>>number;
    if (number<0){
        number = number*-1;
    }
    cout<<number;
    return 0;
}