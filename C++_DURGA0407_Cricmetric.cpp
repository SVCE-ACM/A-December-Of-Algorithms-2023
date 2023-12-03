#include <iostream>
using namespace std;

int main()
{
    int n,i,sum=0,max;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    cout<<"\n"<<sum<<"\n";
    int maxindex;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            maxindex=i;
        }
    }
    cout<<maxindex;
}
