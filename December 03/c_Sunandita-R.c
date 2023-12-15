#include<stdio.h>
int main(){
int n,i;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i=i+1){scanf("%d",&arr[i]);}
int count=1;
int max=arr[0];
for(i=1;i<n;i++){
    if(arr[i]>max){
        count++;
        max=arr[i];
    }
}
printf("%d",count);
}