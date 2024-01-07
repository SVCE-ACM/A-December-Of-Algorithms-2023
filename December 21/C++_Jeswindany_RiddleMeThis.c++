#include <iostream>
using namespace std;

#include <string.h>

int main(){
    string S;
    cout << "Code: ";
    cin >> S;
    cout << "Shift: ";
    int shift;
    cin >> shift;
    for (int i=0; S[i]!='\0'; i++){
        char tmp = S[i]-(shift%26);
        if(tmp < 65)
            tmp = 90-(64-tmp);
        cout << tmp;
    }
    cout << endl;
    return 0;
}