#include <stdio.h>
#include <string.h>

// Function to extract substring based on SQL query
void extractSubstring(char empname[], int start, int end, char result[]) {
    // Check if start and end values are within the bounds of empname
    if (start >= 1 && end <= strlen(empname) && start <= end) {
        // Calculate the length of the substring
        int length = end - start + 1;

        // Extract substring using strncpy
        strncpy(result, empname + start - 1, length);
        result[length] = '\0'; // Null-terminate the result string
    } else {
        // Invalid start or end values
        strcpy(result, "Invalid Query");
    }
}

int main() {
    // Get employee name from the user
    printf("Enter employee name: ");
    char empname[100]; // Adjust the size accordingly
    fgets(empname, sizeof(empname), stdin);
    empname[strcspn(empname, "\n")] = '\0'; // Remove the newline character

    // Get start from the user
    printf("Enter start position: ");
    int start;
    scanf("%d", &start);

    // Get end from the user
    printf("Enter end position: ");
    int end;
    scanf("%d", &end);

    // Validate and extract substring
    char result[100]; // Adjust the size accordingly
    extractSubstring(empname, start, end+1, result);

    // Display the result
    printf("Output: %s\n", result);

    return 0;
}
