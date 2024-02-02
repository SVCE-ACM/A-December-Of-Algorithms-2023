#include <stdio.h>
#include <ctype.h>
void textToNum(char *input) 
{
    int i;
    for (i = 0; input[i] != '\0'; i++) 
    {
        if (isalpha(input[i])) 
        {
            char letter = toupper(input[i]);
            if ('A' <= letter && letter <= 'C') 
                printf("%d", 2);
             else if ('D' <= letter && letter <= 'F') 
                printf("%d", 3);
             else if ('G' <= letter && letter <= 'I') 
                printf("%d", 4);
             else if ('J' <= letter && letter <= 'L') 
                printf("%d", 5);
             else if ('M' <= letter && letter <= 'O') 
                printf("%d", 6);
             else if ('P' <= letter && letter <= 'S') 
                printf("%d", 7);
             else if ('T' <= letter && letter <= 'V') 
                printf("%d", 8);
             else if ('W' <= letter && letter <= 'Z') 
                printf("%d", 9);
        } else 
            printf("%c", input[i]);
    }
}

int main() 
{
    char input[100];
    printf("Enter the encoded phone number: ");
    scanf("%s", input);
    printf("Converted numerical form: ");
    textToNum(input);
    return 0;
}


