#include <stdio.h>

struct student {
    char name[40];
    int roll;
    int marks[6]; // Array for 6 subjects
};

// Function to calculate the total marks for a student
int calculate_total_marks(struct student s) {
    int total = 0;
    for (int i = 0; i < 6; i++) { // 6 subjects
        total += s.marks[i];
    }
    return total;
}

int main() {
    const int num_students = 10; // Number of students
    const int num_subjects = 6;  // Number of subjects

    struct student students[num_students];

    // Input student data
    for (int i = 0; i < num_students; i++) {
        printf("Enter name for student %d: ", i + 1);
        scanf(" %[^\n]", students[i].name);  // Read the full line including spaces
        printf("Enter roll number for student %d: ", i + 1);
        scanf("%d", &students[i].roll);
        
        printf("Enter marks for %d subjects for student %d:\n", num_subjects, i + 1);
        for (int j = 0; j < num_subjects; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
        }
    }

    // Print student data
    printf("\nStudent Data:\n");
    for (int i = 0; i < num_students; i++) {
        int total = calculate_total_marks(students[i]);
        printf("Roll Number: %d\n", students[i].roll);
        printf("Name: %s\n", students[i].name);
        printf("Total Marks: %d\n", total);
        printf("\n"); // Blank line for better readability
    }

    return 0;
}
