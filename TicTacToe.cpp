#include <iostream>
using namespace std;

void  showGame(string inputs[]){
//    string inputs[9] = {"0","1","2","3","4","5","6","7","8"};
    cout<<inputs[0]<<" "<<inputs[1]<<" "<<inputs[2]<<endl;
    cout<<inputs[3]<<" "<<inputs[4]<<" "<<inputs[5]<<endl;
    cout<<inputs[6]<<" "<<inputs[7]<<" "<<inputs[8]<<endl;
    cout<<endl<<"-------------------------------------------"<<endl;
}

bool checkWinUser1(string inputs[]){
//    horizon
    if (inputs[0] == inputs[1] && inputs[0] ==inputs[2] && inputs[0] == "*" ){
        return true;
    }
    if (inputs[3] == inputs[4] && inputs[3] ==inputs[5] && inputs[3] == "*" ){
        return true;
    }
    if (inputs[6] == inputs[7] && inputs[6] ==inputs[8] && inputs[6] == "*" ){
        return true;
    }

//    vertical
    if (inputs[0] == inputs[3] && inputs[0] ==inputs[6] && inputs[0] == "*" ){
        return true;
    }
    if (inputs[1] == inputs[4] && inputs[1] ==inputs[7] && inputs[1] == "*" ){
        return true;
    }
    if (inputs[2] == inputs[5] && inputs[2] ==inputs[8] && inputs[2] == "*" ){
        return true;
    }

//    orib
    if (inputs[0] == inputs[4] && inputs[0] ==inputs[8] && inputs[0] == "*" ){
        return true;
    }
    if (inputs[2] == inputs[4] && inputs[2] ==inputs[6] && inputs[2] == "*" ){
        return true;
    }


}
void getInputUser1(string inputs[]){
    cout<<"Enter Number 0-9: User1"<<endl;
    int number;
    cin>>number;
    inputs[number] = "*";

}void getInputUser2(string inputs[]){
    cout<<"Enter Number 0-9: User2"<<endl;
    int number;
    cin>>number;
    inputs[number] = "O";

}

int  main() {
    cout<<"Tic Tac Toe Game:"<<endl;
    string inputs[9] = {"0","1","2","3","4","5","6","7","8"};
    string uName1;
    string uName2;
//    Get Name Users
    cout<<"User 1 Name: "<<endl;
    cin>>uName1;
    cout<<"user1 :*"<<endl;
    cout<<"User 2 Name: "<<endl;
    cin>>uName2;
    cout<<"user1 :O"<<endl;
//  show game
    showGame(inputs);
    for (int i = 0; i <2 ; ++i) {
        getInputUser1(inputs);
        showGame(inputs);
        getInputUser2(inputs);
        showGame(inputs);
    }




    return 0;
}
