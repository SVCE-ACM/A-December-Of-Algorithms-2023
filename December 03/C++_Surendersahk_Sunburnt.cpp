#include<iostream>

using namespace std;

int main(){
    int h[10],n;
    int max= 0;

    cout <<"\nEnter how many elements(buildings)"<< endl;
    cin>>n;

    cout << "\nEnter the height of the buildings"<< endl;
    for(int i=0;i<n;i++){
        cin>>h[i];

    }
    for(int i=0;i<n;i++){
        if(h[i]>max){
            max=h[i];

        }
        cout <<"max:"<< max<< endl;
    }
    
    int size = sizeof(max);
    
     cout << "size is  :"<< size << endl;


}