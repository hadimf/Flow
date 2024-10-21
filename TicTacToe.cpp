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
bool checkWinUser2(string inputs[]){
//    horizon
    if (inputs[0] == inputs[1] && inputs[0] ==inputs[2] && inputs[0] == "O" ){
        return true;
    }
    if (inputs[3] == inputs[4] && inputs[3] ==inputs[5] && inputs[3] == "O" ){
        return true;
    }
    if (inputs[6] == inputs[7] && inputs[6] ==inputs[8] && inputs[6] == "O" ){
        return true;
    }

//    vertical
    if (inputs[0] == inputs[3] && inputs[0] ==inputs[6] && inputs[0] == "O" ){
        return true;
    }
    if (inputs[1] == inputs[4] && inputs[1] ==inputs[7] && inputs[1] == "O" ){
        return true;
    }
    if (inputs[2] == inputs[5] && inputs[2] ==inputs[8] && inputs[2] == "O" ){
        return true;
    }

//    orib
    if (inputs[0] == inputs[4] && inputs[0] ==inputs[8] && inputs[0] == "O" ){
        return true;
    }
    if (inputs[2] == inputs[4] && inputs[2] ==inputs[6] && inputs[2] == "O" ){
        return true;
    }


}

bool checkInput(string inputs[],int input){
    if (inputs[input] == "*" || inputs[input] == "O"){
        return false;
    }
    return true;
}
bool checkFinishGame(string inputs[]){
    if (inputs[0]!="0" &&
            inputs[1]!="1" &&
            inputs[2]!="2" &&
            inputs[3]!="3" &&
            inputs[4]!="4" &&
            inputs[5]!="5" &&
            inputs[6]!="6" &&
            inputs[7]!="7" &&
            inputs[8]!="8"){
        return true;
    }
    return false;
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
    bool u1Win = false;
    bool u2Win = false;
//    Get Name Users
    cout<<"User 1 Name: "<<endl;
    cin>>uName1;
    cout<<"user1 :*"<<endl;
    cout<<"User 2 Name: "<<endl;
    cin>>uName2;
    cout<<"user1 :O"<<endl;
//  show game
    showGame(inputs);
    for (int i = 0; i <5 ; ++i) {
        getInputUser1(inputs);
        showGame(inputs);

        u1Win = checkWinUser1(inputs);
        if (u1Win){
            cout<<"User 1 Win";
            break;
        }
        if (i!=4){
        getInputUser2(inputs);
        showGame(inputs);
        u2Win = checkWinUser2(inputs);
        if (u2Win){
            cout<<"User 2 Win";
            break;
        }} else{
            showGame(inputs);
        }
    }
    if (!u2Win && !u1Win){
        cout<<"Tie";
    }




    return 0;
}
