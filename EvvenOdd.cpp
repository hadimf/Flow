#include <iostream>
using namespace std;

int main() {
    cout<<"EvenOdd Number:"<<endl;
    cout<<"Enter Number:"<<endl;
    int number;
    cin>>number;
    if (number<0){
        cout<<"error";
    } else{
    if (number%2==0){
        cout<<"Even";
    }else{
        cout<<"odd";
    }}
    return 0;
}