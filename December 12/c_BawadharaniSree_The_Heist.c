#include <stdio.h>
#include <string.h>
#include <ctype.h>
int contains_gold(char box[]) 
{
    char* goldPtr = strstr(box, "Gold");
    while (goldPtr != NULL) {
        if ((goldPtr == box || !isalpha(*(goldPtr - 1))) &&
            (!isalpha(*(goldPtr + 4)) || *(goldPtr + 4) == '\0')) {
            return 1;  
        }
        goldPtr = strstr(goldPtr + 1, "Gold");
    }

    return 0;
}
char* binary_search(char box1[], char box2[], char box3[]) 
{
    while (strlen(box1) > 1) {
        int mid = strlen(box1) / 2;
        if (contains_gold(box1)) {
            return "Box1 Contains the Gold";
        } else if (contains_gold(box2)) {
            return "Box2 Contains the Gold";
        } else if (contains_gold(box3)) {
            return "Box3 Contains the Gold";
        }
        if (contains_gold(box1 + mid)) 
        {
            box1 = box1 + mid;
            box2 = box2 + mid;
            box3 = box3 + mid;
        } else {
            box1[mid] = '\0';
            box2[mid] = '\0';
            box3[mid] = '\0';
        }
    }
    if (contains_gold(box1)) 
    {
        return "Box1 Contains the Gold";
    } else if (contains_gold(box2)) {
        return "Box2 Contains the Gold";
    } else if (contains_gold(box3)) {
        return "Box3 Contains the Gold";
    } else {
        return "Gold not found in any box";
    }
}

int main() 
{
    char box1[100], box2[100], box3[100];
    printf("Enter the contents of Box1 (comma-separated): ");
    scanf("%s", box1);
    printf("Enter the contents of Box2 (comma-separated): ");
    scanf("%s", box2);
    printf("Enter the contents of Box3 (comma-separated): ");
    scanf("%s", box3);
    char* result = binary_search(box1, box2, box3);
    printf("%s\n", result);
    return 0;
}


