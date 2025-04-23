#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Input character from user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if it's a special character
    if (!isalnum(ch)) {
        printf("'%c' is a special character.\n", ch);
    } else {
        printf("'%c' is not a special character.\n", ch);
    }

    return 0;
}
