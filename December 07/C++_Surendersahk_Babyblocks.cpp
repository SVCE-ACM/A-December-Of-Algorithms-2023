#include<iostream>
#include<math.h>
using namespace std;

int main (){

    int diagonal,diameter,width ,height,rad_of_circle,square;

    cout <<"Enter the value of width :";
    cin>>width;

    cout <<"\nEnter the value of height :";
    cin>>height;

    square= pow(width,2)+pow(height,2);

    diagonal=sqrt(square);

    cout << diagonal<< endl;

    cout <<"\nEnter the value of radius of the circle :";
    cin>>rad_of_circle;

    diameter=rad_of_circle*2;

    if(diagonal<=diameter){
        cout<< "true"<< endl;

    }
    else{
        cout << "false" << endl;
    }



}