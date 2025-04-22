#include <stdio.h>

int main() {
    int age;
    char movieType;
    int price = 0;

    // Input from user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter movie type (2 for 2D, 3 for 3D): ");
    scanf(" %c", &movieType); // Space before %c to consume any leftover newline

    // Determine ticket price
    if (age < 12) {
        if (movieType == '2') {
            price = 500;
        } else if (movieType == '3') {
            price = 700;
        } else {
            printf("Invalid movie type!\n");
            return 1;
        }
    } else if (age >= 12 && age <= 18) {
        if (movieType == '2') {
            price = 800;
        } else if (movieType == '3') {
            price = 1000;
        } else {
            printf("Invalid movie type!\n");
            return 1;
        }
    } else if (age > 18 && age <= 60) {
        if (movieType == '2') {
            price = 1000;
        } else if (movieType == '3') {
            price = 1300;
        } else {
            printf("Invalid movie type!\n");
            return 1;
        }
    } else if (age > 60) {
        if (movieType == '2') {
            price = 700;
        } else if (movieType == '3') {
            price = 900;
        } else {
            printf("Invalid movie type!\n");
            return 1;
        }
    } else {
        printf("Invalid age input!\n");
        return 1;
    }

    // Output ticket price
    printf("Your ticket price is: %d\n", price);

    return 0;
}
