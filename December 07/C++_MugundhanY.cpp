#include <bits/stdc++.h>

using namespace std;

bool rectangleInCircle(float h, float b, float r){
    float d = sqrt(pow(h,2)+pow(b,2));
    if(d == 2*r) return true;
    return false;
}

int main()
{
    float h,b,r;
    cout<< "Enter the height, breadth of rectangle and radius of circle: ";
    cin >> h >> b >> r;
    if(rectangleInCircle(h, b, r)) cout << "true";
    else cout << "false";
    return 0;
}
