#include <iostream>
using namespace std;

void swap(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
}

int bubbleSort(int arr[], int n){
    int c = 0;
    for (int i = 0; i<n-1; i++){
        for (int j = 0; j<n-1-i; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                c++;
            }
        }
    }
    return c;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i<n; i++)
        cin >> arr[i];
    int count = bubbleSort(arr, n);
    cout << count << endl;
    return 0;
}
