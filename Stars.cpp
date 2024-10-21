#include <iostream>
using namespace std;

int main() {
cout<<"Stars:"<<endl;
cout<<"Enter Number: "<<endl;
int number;
cin >> number;


//    for (int i = 0; i <number ; ++i) {
//        cout<<"*";
//    }

//----
//    for (int i = 0; i <number ; ++i) {
//        for (int j = 0; j <number ; ++j) {
//            cout<<"*";
//        }
//        cout<<endl;
//    }

//------
//    for (int i = 0; i <number ; ++i) {
//        for (int j = i; j <number ; ++j) {
//            cout<<"*";
//
//        }
//        cout<<endl;
//    }

//-----------------
//    for (int i = 0; i <number ; ++i) {
//        for (int k = number-i; k <number ; k++) {
//            cout<<" ";
//        }
//        for (int j = i; j <number ; ++j) {
//            cout<<"*";
//        }
//        cout<<endl;
//    }
//-------------------

    for (int i = 0; i <number; ++i) {
        for (int j = number-i; j <number ; ++j) {
            cout<<" ";
        }
        for (int k = i+1; k <=(2*number-1) ; k++) {
            cout<<"*";
        }
        for (int m = number-i; m <number ; ++m) {
            cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}
