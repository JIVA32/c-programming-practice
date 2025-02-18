#include <stdio.h>

// Define a structure to store student details
struct Student {
    char name[50];
    float marks[5];  // Array to store marks for 5 subjects
    float total;
    float average;
};

int main() {
    struct Student student;  // Declare a student structure
    int i;

    // Ask for student name
    printf("Enter Student Name: ");
    scanf(" %[^\n]", student.name); // Reads full name including spaces

    // Input marks for 5 subjects
    student.total = 0; // Initialize total to 0
    printf("Enter marks for 5 subjects:\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%f", &student.marks[i]);
        student.total += student.marks[i]; // Add to total
    }

    // Calculate average
    student.average = student.total / 5;

    // Display the student details
    printf("\nStudent Report:\n");
    printf("----------------------------\n");
    printf("Name: %s\n", student.name);
    printf("Total Marks: %.2f\n", student.total);
    printf("Average Marks: %.2f\n", student.average);

    return 0;
}