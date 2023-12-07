#include <iostream>
#include <math.h>
using namespace std;

void rectangleInCircle(double w,double h,double r){
    double diag = sqrt((w*w)+(h*h));
    if(diag>(2*r))
        cout << "false" << endl;
    else
        cout << "true" << endl;
}

int main(){
    double w, h, r;
    cin >> w >> h >> r;
    rectangleInCircle(w,h,r);
    return 0;
}