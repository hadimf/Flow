#include <iostream>
using namespace std;
// using std::map
#include <bits/stdc++.h>
#include <bits/stdc++.h>
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
int main() {
    string input[4][4] ={{" "," ", " ", " "},
                               {" "," ", " "," "},
                               {" ", " ", " ", " "},
                               {" ", " ", " ", " "}};


    generateGame(input);
    showGame(input);


//    map<int, int> dict;
//    dict[1] =  dict[2] =  dict[3] =  dict[4]=  dict[5]=  dict[6]=  dict[7]=  dict[8] =0;
//    for (int i = 0; i <4 ; ++i) {
//        for (int j = 0; j < 4; ++j) {
//
//            while (true){
//
//                    int number = ((rand() % 8)+1);
//                    if (dict[number]==2){
//
//                    }else{
//                        int value = dict[number];
//                        value++;
//                        dict[number]=value;
//                        input[i][j] = to_string(number);
//                        break;
//                    }
//            }
//
//
//
//        }
//    }
////    srand(time(0));
////    for(int i=0;i<10;i++)
////        cout << (rand() % 8)+1  <<" ";
    return 0;
}
