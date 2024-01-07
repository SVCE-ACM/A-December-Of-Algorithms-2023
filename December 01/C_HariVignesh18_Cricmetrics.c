#include<stdio.h>
int main(){
    int n,s,a[100];
    int max;
    int i;
    scanf("%d",&n);
    for(i = 0;i < n;i++){
        scanf("%d",&a[i]);
        s = s + a[i];
    }
    max = a[0];
    int ind = 0;
    for(i = 1;i<n;i++){
        if(a[i]>max){
            max = a[i];
            ind = i;
        }
    }
    printf("%d\n%d",s,ind);
}
