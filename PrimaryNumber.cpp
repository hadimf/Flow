#include <iostream>
using namespace std;

int main() {
    cout<<"Primary Number:"<<endl;
    cout<<"Enter Number:"<<endl;
    int number, count;
    cin>>number;
    if (number<=1){
        cout<<"NO Primary Number";
    }else{
        for (int i = 1; i <=number ; ++i) {
            if (number % i ==0){
                count++;
            }
        }
        if (count==2){
            cout<<"Primary Number"<<endl;
        } else{
            cout<<"No Primary";
        }
    }
    return 0;
}
