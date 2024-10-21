#include <iostream>
using namespace std;

int main() {
    cout<<"Mashroot: "<<endl;
    cout<<"Enter Number:"<<endl;
    int number;
    double average = 0;
    double sum =0;
    int c =0;
    do {
        cin>>number;
        if (number!=-1){
            sum += number;
            c++;

        }
    } while (number !=-1);
    average = sum/c;
        cout<<"Average "<<average<<endl;
    if (average<12){
        cout<<"Mashroot";
    }else{
        cout<<"Mashroot Nist";
    }
    return 0;
}