#include <bits/stdc++.h>
using namespace std;
 
long long merge(vector<int> &array,int s,int e){
    int i = s;
    int m = s+(e-s)/2;
    int j = m + 1;
    long long ans=0;
    int  l=i;
    for(int k=j;k<=e;k++){
        while(l<=m && array[l]<=array[k])l++;
        ans+=(m-l+1);
    }
    vector<int> temp;
    while(i<=m and j<=e){
        if(array[i] <= array[j]){
            temp.push_back(array[i++]);
        }
        else{
            temp.push_back(array[j++]);
        }
    }
    while(i<=m){
        temp.push_back(array[i++]);
    }
    while(j<=e){
        temp.push_back(array[j++]);
    }
    int k = 0 ;
    for(int idx = s; idx <=e ;idx++){
        array[idx] = temp[k++];
    }
    return ans;
}

long long mergesort(vector<int> &arr,int s,int e){
    if(s>=e){
        return 0;
    }
    int mid = (s+e)/2;
    long long ans=0;
    ans+=mergesort(arr,s,mid);
    ans+=mergesort(arr,mid+1,e);
    ans+=merge(arr,s,e);
    return ans;
}

int main() {
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<mergesort(a,0,n-1);
    return 0;
}
