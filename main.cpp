#include <iostream>

using namespace std;

void encrypt(){
    string to_encrypt;
    cout << "Enter the string to encrypt (no special characters or numbers, only letters): ";
    cin >> to_encrypt;
    int encryptedint [to_encrypt.length()][2];
    int i = 0;
    while(i < to_encrypt.length()){
        if (to_encrypt[i] == 'a'){
            encryptedint [i] = 1;                                           //my god this is long. sorry future self 
        }
        else if (to_encrypt[i] == 'b'){
            encryptedint[i] = 2;      
        }
        else if (to_encrypt[i] == 'c'){
            encryptedint[i] = 3;
        }
        else if (to_encrypt[i] == 'd'){
            encryptedint[i] = 4;
        }
        else if (to_encrypt[i] == 'e'){
            encryptedint[i] = 5;
        }
        else if (to_encrypt[i] == 'f'){
            encryptedint[i] = 6;
        }
        else if (to_encrypt[i] == 'g'){
           encryptedint[i] = 7;
        }
        else if (to_encrypt[i] == 'h'){
           encryptedint[i] = 8;
        }
        else if (to_encrypt[i] == 'i'){
           encryptedint[i] = 9;
        }
        else if (to_encrypt[i] == 'j'){
          encryptedint[i] = 10;
        }
        else if (to_encrypt[i] == 'k'){
           encryptedint[i] = 11;
        }
        else if (to_encrypt[i] == 'l'){
           encryptedint[i] = 12;
        }
        else if (to_encrypt[i] == 'm'){
           encryptedint[i] = 13;
        }
        else if (to_encrypt[i] == 'n'){
           encryptedint[i] = 14;
        }
        else if (to_encrypt[i] == 'o'){
           encryptedint[i] = 15;
        }
        else if (to_encrypt[i] == 'p'){
            encryptedint[i] = 16;
        }
        else if (to_encrypt[i] == 'q'){
            encryptedint[i] = 17;
        }
        else if (to_encrypt[i] == 'r'){
           encryptedint[i] = 18;
        }
        else if (to_encrypt[i] == 's'){
            encryptedint[i] = 19;
        }
        else if (to_encrypt[i] == 't'){
            encryptedint[i] = 20;
        }
        else if (to_encrypt[i] == 'u'){
           encryptedint[i] = 21;
        }
        else if (to_encrypt[i] == 'v'){
            encryptedint[i] = 22;
        }
        else if (to_encrypt[i] == 'w'){
            encryptedint[i] = 23;
        }
        else if (to_encrypt[i] == 'x'){
           encryptedint[i] = 24;
        }
        else if (to_encrypt[i] == 'y'){
           encryptedint[i] = 25;
        }
        else if (to_encrypt[i] == 'z'){
           encryptedint[i] = 26;
        }
        i++;
    }
    cout << to_encrypt << endl;
}

void decrypt(){
    string to_decrypt;
    cout << "Enter the string to decrypt: ";
    cin >> to_decrypt;
    cout << to_decrypt << endl;
}



int main(){
    string firstanswer;
    cout << "Encrypt or decrypt: ";
    cin >> firstanswer;
    if (firstanswer == "encrypt"){
        encrypt();
    }
    else if (firstanswer == "decrypt"){
        decrypt();
    }
    else{
        cout << "Invalid input" << endl;
    }
}