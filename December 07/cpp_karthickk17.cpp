#include <bits/stdc++.h>

using namespace std;

int main() {
    int width,height,radius;
    cin>>width>>height>>radius;
    float diagonal = sqrt(pow(width,2)+pow(height,2));
    cout<<boolalpha<<(ceil(diagonal)<=(2*radius));//boolalpha sets the flag to display the boolean values as true or false.
    return 0;
}
