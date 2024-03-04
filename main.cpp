#include<iostream>

using namespace std;

string arrayprint(){ //prints the array                                     //the point of this method is to 
    string map[10][10] = {
                    {"_","_","_","_","_","_","_","_","_","_"},
                    {"_","_","_","_","_","_","_","_","_","_"},
                    {"_","_","_","_","_","_","_","_","_","_"},
                    {"_","_","_","_","_","_","_","_","_","_"},  //defines the game game
                    {"_","_","_","_","_","_","_","_","_","_"},
                    {"_","_","_","_","_","_","_","_","_","_"},
                    {"_","_","_","_","_","_","_","_","_","_"},
                    {"_","_","_","_","_","_","_","_","_","_"},
                    {"_","_","_","_","_","_","_","_","_","_"},
                    {"_","_","_","_","_","_","_","_","_","_"}
                        };

    int i = 0;
    int j = 0;                                                                            //WHAT TO DO:
    while(i < 10){                                                                                  // 1. Incorporate movement into ar  rayprint,                                                                                  // 2. Create a player character
        while(j < 10){                                                                              // Uuse a parameter for this. MUST PASS DATA BETWEEN METHODS
            cout << map[i][j];
            j++;
        }
        cout << endl;
        i++;
    }


}

int main(){
    string input1;
    cout << "To exit, enter 'q'" << endl;
    while(true){
        arrayprint();
        cout << " " << endl;
        cin >> input1;
        if (input1 == "q"){
            exit;
        }

        else if (input1 == "w"){
            // move up
        }
        else if (input1 == "s"){
            // move down
        }
        else if (input1 == "a"){
            // move left
        }
        else if (input1 == "d"){
            // move right
        }
    }
}