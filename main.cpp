#include<iostream>

using namespace std;

int encrypt(string message){     //encrypts the message
    std::map<char, string> letter_to_number = {
    {'a', "1"},
    {'b', "2"},
    {'c', "3"},
    {'d', "4"},
    {'e', "5"},
    {'f', "6"},
    {'g', "7"},
    {'h', "8"},
    {'i', "9"},
    {'j', "10"},
    {'k', "11"},
    {'l', "12"},
    {'m', "13"},
    {'n', "14"},
    {'o', "15"},
    {'p', "16"},
    {'q', "17"},
    {'r', "18"},
    {'s', "19"},
    {'t', "20"},
    {'u', "21"},
    {'v', "22"},
    {'w', "23"},
    {'x', "24"},
    {'y', "25"},
    {'z', "26"}
};

}

string decrypt(string message){        //decrypts the message
    //placeholder
}


int main(){                     //handles user interaction
    string initial_option;
    cout << "Encrypt or decrypt? ";
    cin >> initial_option;
    if (initial_option == "encrypt"){
        string message;
        cout << "Enter the message you want to encrypt: ";
        cin >> message;
        cout << "Encrypted version: " << encrypt(message) << endl;
    }

    else if (initial_option == "decrypt"){
        string message;
        cout << "Enter the key: ";
        cin >> message;
        cout << "Decrypted version: " << decrypt(message) << endl;
    }

    else{
        cout << "Invalid option" << endl;
    }
}