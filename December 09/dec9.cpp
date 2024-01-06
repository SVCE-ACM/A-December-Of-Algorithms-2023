#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int words = 0;
    string str;
    cout<<"enter String:";
    cin>>str;
    
    for(int i=0; i<str.size(); i++) 
    {
        if(isupper(str[i]))
        {
            words++;
        }
            
    }
    
    cout<<words;
    
    return 0;
}
