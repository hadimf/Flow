#include <iostream>
using namespace std;

int main() {
    cout<<"Fiboo Number:"<<endl;

    int temp =0;
    int f =0;
    int s=1;

    while (s<=100){
        cout<<s<<endl;
        temp = f;
        f = s;
        s = s +temp;
    }
    return 0;
}
