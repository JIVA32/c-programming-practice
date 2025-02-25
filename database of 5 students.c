#include <stdio.h>

#define NUM_STUDENTS 5

// Function to calculate grade based on average
char calculateGrade(float average) {
    if (average >= 90) return 'A';
    if (average >= 80) return 'B';
    if (average >= 70) return 'C';
    if (average >= 60) return 'D';
    return 'F';
}

int main() {
    // Define structure for student data
    struct Student {
        char name[50];
        float subj1, subj2, subj3, average;
        char grade;
    };

    struct Student students[NUM_STUDENTS];

    // Input student details
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", students[i].name); // Reads full name including spaces
        printf("Enter marks for Subject 1: ");
        scanf("%f", &students[i].subj1);
        printf("Enter marks for Subject 2: ");
        scanf("%f", &students[i].subj2);
        printf("Enter marks for Subject 3: ");
        scanf("%f", &students[i].subj3);

        // Calculate average
        students[i].average = (students[i].subj1 + students[i].subj2 + students[i].subj3) / 3.0;

        // Assign grade
        students[i].grade = calculateGrade(students[i].average);
    }

    // Display student data
    printf("\n---- Student Records ----\n");
    printf("%-20s %-10s %-10s %-10s %-10s %-5s\n", "Name", "Subj1", "Subj2", "Subj3", "Average", "Grade");
    for (int i = 0; i < NUM_STUDENTS; i++) {
        printf("%-20s %-10.2f %-10.2f %-10.2f %-10.2f %-5c\n",
               students[i].name, students[i].subj1, students[i].subj2, students[i].subj3,
               students[i].average, students[i].grade);
    }

    return 0;
}