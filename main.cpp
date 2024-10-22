#include <iostream>
using namespace std;
// using std::map
#include <bits/stdc++.h>
#include <bits/stdc++.h>
void generateGame(){}
int main() {
    string input[4][4] ={{" "," ", " ", " "},
                               {" "," ", " "," "},
                               {" ", " ", " ", " "},
                               {" ", " ", " ", " "}};


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
    srand(time(0));
    for(int i=0;i<10;i++)
        cout << (rand() % 8)+1  <<" ";
    return 0;
}
