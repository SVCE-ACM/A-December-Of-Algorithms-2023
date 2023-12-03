#include <stdio.h>
int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i = 0;i < n; i++){
        scanf("%d",&a[i]);
    }
    int b = 1;
    for(int i = 1;i < n; i++){
        if(a[i]>a[i-1]){
            b += 1;
        }
    }
    printf("%d",b);
}
