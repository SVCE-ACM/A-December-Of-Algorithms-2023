#include <iostream>
using namespace std;
int main() 
{
    string encrypted;
    cout<<" encrypted string:";
    cin >> encrypted;
    
    string decrypted= "";
    for (char ch: encrypted) 
    {
        if ( isalpha(ch) ) 
        {
            if ( ch <= 'C' )
                decrypted += '2';
            else if ( ch <= 'F' )
                decrypted += '3';
            else if ( ch <= 'I' )
                decrypted += '4';
            else if ( ch <= 'L' )
                decrypted += '5';
            else if ( ch <= 'O' )
                decrypted += '6';
            else if ( ch <= 'S' )
                decrypted += '7';
            else if ( ch <= 'V' )
                decrypted += '8';
            else
                decrypted += '9';
        }
        else
            decrypted+= ch;
    }
    cout<<decrypted;
    
    return 0;
}
