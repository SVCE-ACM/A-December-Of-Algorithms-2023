#include <string.h>

#include <iostream>
using namespace std;

int textToNum(char c){
    switch(c){
        case 65:
        case 66:
        case 67:
            return 2;
        case 68:
        case 69:
        case 70:
            return 3;
        case 71:
        case 72:
        case 73:
            return 4;
        case 74:
        case 75:
        case 76:
            return 5;
        case 77:
        case 78:
        case 79:
            return 6;
        case 80:
        case 81:
        case 82:
        case 83:
            return 7;
        case 84:
        case 85:
        case 86:
            return 8;
        case 87:
        case 88:
        case 89:
        case 90:
            return 9;
    }
}

int main(){
    string S;
    cin >> S;
    for (char i: S){
        if(i>=65 && i<=90)
            cout << textToNum(i);
        else if(i>=97 && i<=122)
            cout << textToNum(toupper(i));
        else
            cout << i;
    }
    cout << endl;
    return 0;
}
