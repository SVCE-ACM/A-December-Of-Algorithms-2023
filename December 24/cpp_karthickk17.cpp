#include <bits/stdc++.h>
using namespace std;

int inversions = 0;
void merge(int, int, int, vector<int>&);
void merge_sort(int left, int right, vector<int>& arr) {
    if(left >= right)
        return ;
    int mid = (left+right)/2;
    merge_sort(left, mid, arr);
    merge_sort(mid+1, right, arr);
    merge(left, mid, right, arr);
}

void merge(int left, int mid, int right, vector<int>& arr) {
    int i = left, j = mid+1, n = right-left+1;
    // cout<<left<<" "<<mid<<" "<<right<<" "<<inversions<<endl;
    vector<int> merged;
    while (i <= mid && j <=right)
    {
        if (arr[i] < arr[j]) {
            merged.push_back(arr[i]);
            i++;
        }
        else {
            merged.push_back(arr[j]);
            inversions += (mid-i+1);
            j++;
        }
    }
    while (i <= mid) {
        merged.push_back(arr[i]);
        i++;
    }
    while (j <= right) {
        merged.push_back(arr[j]);
        j++;
    }
    for (int p = 0; p < n; ++p) {
        arr[left + p] = merged[p];
    }
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     cout<<arr[i] <<" ";
    // }
    // cout<<endl;
}

void bruteforce(vector<int>& arr, int n) {
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                count++;    
            }
            
        }
    }
    cout << count << endl;
}
int main() {
    freopen("C:/Users/karth/OneDrive/Desktop/December of Algorithms/A-December-Of-Algorithms-2023/input.txt", "r", stdin);
    freopen("C:/Users/karth/OneDrive/Desktop/December of Algorithms/A-December-Of-Algorithms-2023/output.txt", "w", stdout);
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];     
    }
    // bruteforce(arr, n);
    merge_sort(0, n-1, arr);
    cout << inversions << endl;
}