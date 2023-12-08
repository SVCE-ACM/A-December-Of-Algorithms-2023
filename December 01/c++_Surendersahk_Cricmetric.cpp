//There are five batsmen in the match. Their runs are 20, 35, 40, 15, and 25. The total  runs scored by the team are 135. Batsman number 3 (index 2) scored the highest  number of runs, which is 40. 

#include<iostream>

using namespace std;

int main(){
    int n,arr[100],sum=0;
    cout << "Enter How many batsmen in the match :\n"<< endl;
    cin >>n;

    cout << "Enter the runs :\n"<< endl;

    for(int i=0;i<n;i++){
    cin >> arr[i];
    }

    for(int i=0;i<n;i++){
        sum +=arr[i];
    }

    cout << "Total runs scored by the team : "<<sum << endl;

    int max=arr[0],index;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
            index = i;

        }
    }
    cout << "\nThe batsman at index "<< index <<" scored the highest  number of runs , which is "<<max << endl;


    
}