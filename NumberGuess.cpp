#include <iostream>
#include <unistd.h>

using namespace std;
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

int main() {
    cout<<"Number Guess:"<<endl;
    string input[4][4]= {{"1","1","2","2"},
                      {"3","3","4","4"},
                      {"5","5","6","6"},
                      {"7","7","8","8"}};

    string emptyInput[4][4] ={{" "," ", " ", " "},
                              {" "," ", " "," "},
                              {" ", " ", " ", " "},
                              {" ", " ", " ", " "}};


    showGame(input);
    showGame(emptyInput);


    int point1x, point1y, point2x, point2y;
//    Get Points
    cout<<"Enter Point1: "<<endl;
    cin>>point1x>>point1y;
    cout<<"Enter Point2: "<<endl;
    cin>>point2x>>point2y;




    return 0;
}
