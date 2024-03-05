#include<iostream>
#include<cstdlib>
#include<unistd.h>

using namespace std;

void printarray(){
    string mainarray[10][11] = {
                    {"_", "_", "_", "_", "_", "_", "_", "_", "_", "_", "_"},
                    {"_", "_", "_", "_", "_", "_", "_", "_", "_", "_", "_"},
                    {"_", "_", "_", "_", "_", "_", "_", "_", "_", "_", "_"},
                    {"_", "_", "_", "_", "_", "_", "_", "_", "_", "_", "_"},
                    {"_", "_", "_", "_", "_", "_", "_", "_", "_", "_", "_"},
                    {"_", "_", "_", "_", "_", "_", "_", "_", "_", "_", "_"},
                    {"_", "_", "_", "_", "_", "_", "_", "_", "_", "_", "_"},
                    {"_", "_", "_", "_", "_", "_", "_", "_", "_", "_", "_"}, 
                    {"_", "_", "_", "_", "_", "_", "_", "_", "_", "_", "_"},
                    {"_", "_", "_", "_", "_", "*", "_", "_", "_", "_", "_"}         //10, 5 is the position of the player
                            };  

    int i = 0; 
    int j = 0;

    while(i<10){
        while(j<11){
            cout << mainarray[i][j];
            j++;
        }
        cout << endl;
        j=0;
        i++;
    }
}



int main(){
    cout << "Welcome! Press Q to quit. " << endl; 
    sleep(2);
    char input;
    
    while(true){
        printarray();
        cin >> input;
        if (input = 'q'){
            exit;
        }
    }

    return 0;
}