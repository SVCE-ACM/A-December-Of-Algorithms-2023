#include <bits/stdc++.h>
using namespace std;

void find(int width, int height, int radius)
{
    float diagonal=sqrt(width*width + height*height);
    float diameter=radius*2;
    
    if(diagonal>diameter)
    {
        cout<<"false";
    }
    else
    {
        cout<<"true";
    }
    
}

int main()
{
    cout<<"enter width,height,radius:";
    int width,height,radius;
    cin>>width;
    cin>>height;
    cin>>radius;
    
    find(width, height, radius);
    
    return 0;
    
}
