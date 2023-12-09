#include <string.h>
#include <iostream>
using namespace std;

int main(){
    string text;
    cin >> text;
    int c = 1;
    for(int i = 0; i<text.length(); i++){
        if(text[i] >=65 && text[i] <= 90){
            c += 1;
        }
    }
    cout << c;
    return 0;
}