#include <iostream>
using namespace std;

int main()
{
    int n,i,sum=0,res=0;
    double avg=0.0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    for(i=0;i<n;i++)
    {
        sum +=a[i];
    }
    avg=(int)(sum/n);
    for(i=0;i<n;i++)
    {
        if(a[i]>=avg)
        {
            res+=a[i];
        }
    }
    cout<<"\n"<<res;    
}
