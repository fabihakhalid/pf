#include <stdio.h>

int main(void) {
    int i, absentCount = 0;
    char attendance;
    int employeeID; 

    printf("Enter Employee ID: ");
    scanf("%d", &employeeID);

    printf("Enter attendance for 30 days (P for Present, A for Absent):\n");

    for(i = 1; i <= 30; i++) {
        printf("Day %d: ", i);
        scanf(" %c", &attendance); // space before %c to consume whitespace

        if(attendance == 'A' || attendance == 'a') {
            absentCount++;
        } else if(attendance != 'P' && attendance != 'p') {
            printf("Invalid input. Please enter P or A only.\n");
            i--; // Repeat the same day
        }
    }

    printf("\nEmployee ID: %d\n", employeeID);
    printf("Total Days Absent: %d\n", absentCount);

    if(absentCount > 5) {
        printf("Warning: You have been absent for more than 5 days!\n");
    } else {
        printf("Attendance is satisfactory.\n");
    }
Getch()

    
}
