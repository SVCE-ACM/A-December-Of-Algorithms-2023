#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void encrypt(char text[], int shift) {
    char result[100];

    for (int i = 0; text[i] != '\0'; i++) {
        char base = isupper(text[i]) ? 'A' : 'a';
        result[i] = (char)(((text[i] - shift + base) % 26) + base);
    }

    result[strlen(text)] = '\0';
    printf("The Bomb Location is %s - Shift %d", result,shift);
}

int main() {
    char text[] = "RQHODQTLATCTQ";
    printf("Input Text : %s\n", text);
    int shift = 25;
	encrypt(text,shift);
    return 0;
}
