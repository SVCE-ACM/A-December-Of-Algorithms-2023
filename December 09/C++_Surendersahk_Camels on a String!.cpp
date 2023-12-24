#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){

    string s;
    int count=0;

    cout << "ENter  the string s : ";
    cin>>s;

    

    for( char str : s){
        if(isupper(str)){
            
        }
      count++;
    }
    cout << "The letter is " << count<< endl;


}