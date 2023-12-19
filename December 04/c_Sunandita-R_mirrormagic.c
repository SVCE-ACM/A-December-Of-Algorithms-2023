#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

void generateSmallestPalindrome(char str[]) {
    int len = strlen(str);
    int start=0;
    int end=len-1;
    int min=end-start;
    char res[len];
    bool flag=false;
    while(start<end){
        for(int i=0;i<len;i++)
        {
            res[i]=' ';
        }
        if (isPalindrome(str, start, end) && (end-start)<=min) {
            min=end-start;
            for(int j=start;j<=end;j++)
            
            res[j-start]=str[j];
            flag=true;
        }
        start++;
        end--;
    }
    if(flag)
    printf("%s",res);
    else
    printf("Error\n");
}

int main() {
    char input[100];

   
    scanf("%s", input);

    generateSmallestPalindrome(input);

    return 0;
}
