#include <bits/stdc++.h>

using namespace std;

int main() {
    string str;
    cin>>str;
    int n = str.length();
    if(n == 1) cout<<"Error";
    //The smallest substing is of length 2 or 3. Its 2 in case of even length string and 3 in case of odd length string.
    //All palindromic strings must have the same substring at the middle part. If it doesn't, it is not a palindrome.
    else if(n % 2 == 0){
        if(tolower(str[n/2]) == tolower(str[(n/2)-1]))
            cout<<str.substr((n/2)-1,2);
        else    
            cout<<"Error"<<endl;
    }
    else{
        if(tolower(str[(n/2)-1])==tolower(str[(n/2)+1]))
            cout<<str.substr((n/2)-1,3);
        else    
            cout<<"Error"<<endl;
    }
    return 0;
}