#include <iostream>
using namespace std;

int main() {
    cout<<"Factorial Number:"<<endl;
    cout<<"Enter Number:"<<endl;
    int number;
    int f =1;
    cin>>number;
    if (number<0){
        cout<<"Error";
    }else if (number==0){
        cout<<1;
    } else{

    for (int i = 1; i <=number ; ++i) {
        f *=i;
    }
    cout<<f;
    }

    return 0;
}