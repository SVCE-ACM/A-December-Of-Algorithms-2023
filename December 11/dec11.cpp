#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter the no of input:";
    cin>>n;
    int sum=0;
    for(int i=0;  i<n; i++)
    {
        int a;
        cin>>a;
        sum+=a;
    }
   
    int binaryNum[32];
    int i = 0;
   
    while (sum > 0)
    {
        binaryNum[i] = sum % 2;
        sum = sum / 2;
        i++;
    }

   
    for (int j = i - 1; j >= 0; j--)
    {
        cout << binaryNum[j];
    }
   
   
    return 0;
}
