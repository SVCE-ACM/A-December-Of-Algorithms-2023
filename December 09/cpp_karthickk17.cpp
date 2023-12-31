#include <bits/stdc++.h>

using namespace std;

int main() {
    int no_words = 1;//The first word doesn't have uppercase letters
    //Every uppercase character marks the beginning of new word.
    string line;
    cin>>line;
    for(char ch:line) {
        if(ch >= 'A' && ch <= 'Z')
            no_words++;
    }
    cout<<no_words<<endl;
    return 0;
}
