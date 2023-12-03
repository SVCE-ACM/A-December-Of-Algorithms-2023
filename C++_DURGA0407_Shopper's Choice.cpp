#include <iostream>
using namespace std;

int main()
{
    int n,i,j,count;
    cin>>n;
    int a[n],visited[i];
    for(i=0;i<n;i++)
        cin>>a[i];
        visited[i]=a[i];
    cout<<"[";
    for(i=0;i<n;i++)
    {
        count=1;
        if(visited[i]==true)
            continue;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]=true;
            }
        }
        cout<<count<<",";
    }
    cout<<"]";
}
