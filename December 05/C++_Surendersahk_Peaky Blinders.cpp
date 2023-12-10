#include<iostream>
using namespace std;

int main(){
    int arr[10],n,sum=0,res,avg_ans;

    cout << "Enter how many elements :"<< endl; 
    cin>>n;
    cout <<"Enter the elements in the array "<< endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        sum +=arr[i];
    }
    
    res = sum/n; //25
    cout << "res:"<<res <<endl;

    for(int i=0;i<n;i++){
        if(res<=arr[i]){ //25<30
        res=arr[i]; //=30 = 40
         avg_ans+=arr[i];
        }
        
        
    }

    cout << "The sum is "<<avg_ans << endl;



}
