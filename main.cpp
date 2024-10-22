#include <iostream>
#include <unistd.h>
#include <bits/stdc++.h>

using namespace std;
void generateGame(string input[4][4]){
    srand(time(0));
    map<int, int> dict;
    dict[1] =  dict[2] =  dict[3] =  dict[4]=  dict[5]=  dict[6]=  dict[7]=  dict[8] =0;
    for (int i = 0; i <4 ; ++i) {
        for (int j = 0; j < 4; ++j) {

            while (true){

                int number = ((rand() % 8)+1);
                if (dict[number]==2){

                }else{
                    int value = dict[number];
                    value++;
                    dict[number]=value;
                    input[i][j] = to_string(number);
                    break;
                }
            }



        }
    }
}
void showGame(string inputs[4][4]){
    cout<<"    0 1 2 3"<<endl<<endl;
    cout<<"0   "<<inputs[0][0]<<" "<<inputs[0][1]<<" "<<inputs[0][2]<<" "<<inputs[0][3]<<endl;
    cout<<"1   "<<inputs[1][0]<<" "<<inputs[1][1]<<" "<<inputs[1][2]<<" "<<inputs[1][3]<<endl;
    cout<<"2   "<<inputs[2][0]<<" "<<inputs[2][1]<<" "<<inputs[2][2]<<" "<<inputs[2][3]<<endl;
    cout<<"3   "<<inputs[3][0]<<" "<<inputs[3][1]<<" "<<inputs[3][2]<<" "<<inputs[3][3]<<endl;

    cout<<"------------------------------------------------------"<<endl;

}
bool checkPoints(string inputs[4][4],int point1x,int point1y,int point2x,int point2y){
    if (inputs[point1x][point1y] == inputs[point2x][point2y] ){
        return true;
    }
    return false;
}
void addPoints(string input[4][4],string selects[4][4],int point1x,int point1y,int point2x,int point2y){
    selects[point1x][point1y] = input[point1x][point1y];
    selects[point2x][point2y] = input[point1x][point1y];
}
void blink(string input[4][4],string selects[4][4],int point1x,int point1y){
    selects[point1x][point1y] = input[point1x][point1y];
    showGame(selects);
    sleep(1);
//    selects[point1x][point1y] = " ";

}
void blink2(string input[4][4],string selects[4][4],int point1x,int point1y,int point2x,int point2y){
    selects[point1x][point1y] = input[point1x][point1y];
    showGame(selects);
    sleep(1);
    selects[point1x][point1y] = " ";
    selects[point2x][point2y] = " ";

}
bool checkFinishGame(string selects[4][4]){
    int c = 0;
    for (int i = 0; i <4 ; ++i) {
        for (int j = 0; j < 4; ++j) {
            if (selects[i][j]!=" "){
                c++;
            }
        }
    }
    if (c ==16){
        return true;
    } else{
        return false;
    }
}
bool checkIsExist(string selects[4][4],int point1x,int point1y){
    if (selects[point1x][point1y]!= " "){
        return true;
    }else{
        return false;
    }
}

int main() {
    cout<<"Number Guess:"<<endl;
    string input[4][4]= {{" "," ", " ", " "},
                         {" "," ", " "," "},
                         {" ", " ", " ", " "},
                         {" ", " ", " ", " "}};



    string selectInput[4][4] ={{" "," ", " ", " "},
                               {" "," ", " "," "},
                               {" ", " ", " ", " "},
                               {" ", " ", " ", " "}};
    generateGame(input);


    showGame(input);
    cout<<"save the Puzzle for 5 seconds"<<endl;
    sleep(5);

    system("clear");
    // showGame(selectInput);


    int point1x, point1y, point2x, point2y;
//    Get Points

    while (true) {
        if (checkFinishGame(selectInput)){
            break;
        }
        showGame(selectInput);
        bool hasError = false;
        do {
            cout << "Enter Point1: " << endl;
            cin >> point1x >> point1y;
            if((point1x<0 || point1x >3) || (point1y<0 || point1y >3)){
                hasError = true;
                cout<<"Point should be 0-3 "<<endl;
            }else if (checkIsExist(selectInput,point1x, point1y)){
                hasError = true;
                cout<<"Choice another point"<<endl;

            }else{
                hasError = false;
            }
        } while (hasError);

        blink(input, selectInput, point1x, point1y);
//        showGame(selectInput);


        do {


            cout << "Enter Point2: " << endl;
            cin >> point2x >> point2y;
            if((point2x<0 || point2x >3) || (point2y<0 || point2y >3)){
                hasError = true;
                cout<<"Point should be 0-3 "<<endl;
            }else if (point1x == point2x && point1y == point2y){
                cout<<"Duplicate Points!"<<endl;
                hasError = true;
            }else if (checkIsExist(selectInput,point2x, point2y)){
                hasError = true;
                cout<<"Choice another point"<<endl;
            }else{
                hasError = false;

            }} while (hasError);


        blink2(input, selectInput, point2x, point2y, point1x, point1y);
        showGame(selectInput);

        if (checkPoints(input, point1x, point1y, point2x, point2y)) {
            addPoints(input, selectInput, point1x, point1y, point2x, point2y);
            // showGame(selectInput);
            // system("clear");
        }
        system("clear");
    }



    return 0;
}