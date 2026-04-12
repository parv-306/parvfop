
#include <stdio.h>

int main() {
    int marks[5], i;
    int total = 0;
    double percentage;
    char grade;

    printf("Enter marks for 5 courses:\n");
    for(i = 0; i < 5; i++) {
        printf("Course %d: ", i + 1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }

    // Check if the student has passed
    for(i = 0; i < 5; i++) {
        if(marks[i] < 40) {
            printf("Result: FAIL\n");
            return 0;
        }
    }

    // Calculate aggregate percentage
    percentage = (total / 500.0) * 100;

    // Assign grade based on percentage
    if(percentage >= 75) {
        grade = 'A'; // Distinction
    } else if(percentage >= 60) {
        grade = 'B'; // First Division
    } else if(percentage >= 50) {
        grade = 'C'; // Second Division
    } else {
        grade = 'D'; // Third Division
    }

    printf("Result: PASS\n");
    printf("Aggregate Percentage: %.2lf%%\n", percentage);
    printf("Grade: %c\n", grade);

    return 0;
}