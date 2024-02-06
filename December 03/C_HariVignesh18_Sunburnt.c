#include <stdio.h>
int main()
{
    int n,a[100];
    scanf("%d",&n);
    for(int i = 0;i < n; i++){
        scanf("%d",&a[i]);
    }
    int b = 0;
    for(int i = 0;i < n; i++){
        int s = 0;
        for(int j = 0;j < i;j++){
            if(a[j]>=a[i]){
                s = 1;
                break;
            }
        }
        if(s == 0){
            b+=1;
        }
    }
    printf("%d",b);
}
